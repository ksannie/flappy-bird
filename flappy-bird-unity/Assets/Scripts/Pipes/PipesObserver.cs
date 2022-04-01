using System.Collections.Generic;
using Uku.Redux;
using UnityEngine;
using Zenject;

namespace flappybird
{
    public class PipesObserver : MonoBehaviour
    {
        [SerializeField] private List<Pipe> pipesPool;

        private IStore _store;
        private PipesState _state;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = store.GetState<PipesState>();
            Subscribe();
        }

        private void OnDestroy() => Unsubscribe();

        private void Subscribe() => _state.onStateChanged += OnStateChanged;
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

      

        private void OnStateChanged()
        {
            RenderNewPipes(_state.newPipes);
            MovePipes(_state.pipes);
            HideRemovedPipes(_state.removedPipes);
        }


        public void RenderNewPipes(List<PipeData> pipes)
        {
            
            for (int i = 0; i < pipes.Count; i++)
            {
                int index = pipes[i].index;
                pipesPool[index].transform.position = pipes[i].position;
                pipesPool[index].transform.localScale = pipes[i].localScale;
                pipesPool[index].boxCollider2D.offset = pipes[i].colliderOffset;
                pipesPool[index].boxCollider2D.size = pipes[i].colliderSize;
                pipesPool[index].gameObject.SetActive(true);
            }
        }


        public void MovePipes(List<PipeData> pipes)
        {
            for (int i = 0; i < pipes.Count; i++)
            {
                int index = pipes[i].index;
                pipesPool[index].transform.position = pipes[i].position;
            }
        }

        public void HideRemovedPipes(List<PipeData> pipes)
        {
            for (int i = 0; i < pipes.Count; i++)
            {
                int index = pipes[i].index;
                pipesPool[index].gameObject.SetActive(false);
            }
        }
    }
}