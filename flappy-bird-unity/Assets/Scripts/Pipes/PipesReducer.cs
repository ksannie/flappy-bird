using UnityEngine;
using Uku.Redux;
using System.Collections.Generic;

namespace flappybird
{

    public class PipesReducer : BaseReducer<PipesState>
    {
        public PipesReducer(PipesState state) : base(state)
        {

        }

        public override bool Reduce(IAction action)
        {
            return action switch
            {
                PlayerClickAction => ApplyPlayerClickAction(),
                PlayerLostAction => ApplyPlayerLostAction(),
                PipesUpdateAction pipesUpdateAction=> ApplyPipesUpdateAction(pipesUpdateAction),
                _ => false
            };
        }

        private bool ApplyPlayerClickAction()
        {
            if (!state.isRunning)
            {
                
                state.SetIsRunning(true);
                state.SetChanged();
                return true;
            }
            return false;
        }

        private bool ApplyPlayerLostAction()
        {
            state.SetIsRunning(false);
            RemoveAllPipes();
            state.SetChanged();
            return true;
        }

        private bool ApplyPipesUpdateAction(PipesUpdateAction pipesUpdateAction)
        {
            float deltaTime = pipesUpdateAction.payload;
            state.SetPipeSpawnTimer(state.pipeSpawnTimer - deltaTime);

            SpawnPipes();
            MovePipes(state.pipes);
            RemoveOutOfBoundsPipes(state.pipes);

            state.SetChanged();
            return true;
        }

        private void SpawnPipes()
        {
            state.newPipes.Clear();
            if (state.pipeSpawnTimer < 0)
            {
                CreatePipesWithGap(state.spawnXPosition, new Vector2(state.minGapSize, state.maxGapSize), new Vector2(state.minGapPosition, state.maxGapPosition));
                state.SetPipeSpawnTimer(state.pipeSpawnTimerDelay + state.pipeSpawnTimer);
            }
        }

        private void MovePipes(List<PipeData> pipes)
        {
            for (int i = 0; i < state.pipes.Count; i++)
            {
                PipeData pipe = new PipeData
                {
                    position = state.pipes[i].position + Vector3.left * state.pipeSpeed * Time.deltaTime,
                    localScale = state.pipes[i].localScale,
                    colliderSize = state.pipes[i].colliderSize,
                    colliderOffset = state.pipes[i].colliderOffset,
                    index = state.pipes[i].index,
                };
                pipes[i] = pipe;
            }
            
        }

        private void RemoveOutOfBoundsPipes(List<PipeData> pipes)
        {
            state.removedPipes.Clear();
            for (int i = 0; i < pipes.Count; i++)
            {
                if (pipes[i].position.x < state.boundXPosition)
                {
                    state.removedPipes.Add(pipes[i]);
                    pipes.Remove(pipes[i]);
                    i--;
                }
            }
        }

        private void RemoveAllPipes()
        {
            state.removedPipes.Clear();
            state.removedPipes.AddRange(state.pipes);
            state.pipes.Clear();
            state.SetIndexValue(0);
        }


        private void CreatePipesWithGap(float xPosition, Vector2 gapSizeRange, Vector2 gapPositionRange)
        {
            float gapPosition = Random.Range(gapPositionRange.x, gapPositionRange.y);
            float gapSize = Random.Range(gapSizeRange.x, gapSizeRange.y);
            CreatePipe(xPosition, gapPosition - (gapSize / 2f), true);
            CreatePipe(xPosition, (Camera.main.orthographicSize * 2) - (gapPosition + (gapSize / 2f)), false);
        }


        private void CreatePipe(float xPosition, float height, bool isBottom)
        {
            PipeData pipe = new PipeData
            {
                position = new Vector3(xPosition, isBottom ? -Camera.main.orthographicSize : Camera.main.orthographicSize),
                localScale = new Vector3(1f, isBottom ? height : -height, 1f),
                colliderSize = isBottom ? state.bottomColliderSize : state.topColliderSize,
                colliderOffset = isBottom ? state.bottomColliderOffset : state.topColliderOffset,
                index = state.pipeIndex%state.maxNumberPipes,
                
            };
            state.SetIndexValue(state.pipeIndex +1);
            state.newPipes.Add(pipe);
            state.pipes.Add(pipe);
        }


    }
}