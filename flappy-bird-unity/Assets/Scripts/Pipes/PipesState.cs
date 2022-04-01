using System;
using System.Collections.Generic;

using UnityEngine;

using Uku.Redux;

namespace flappybird
{

    [CreateAssetMenu(fileName = "PipesState", menuName = "States/PipesState")]
    public class PipesState : ScriptableState
    {
        [SerializeField] private float _pipeSpeed = 2f;
        [SerializeField] private int _maxNumberPipes = 20;
        [SerializeField] private float _spawnXPosition = 10f;
        [SerializeField] private float _boundXPosition = -10f;
        [SerializeField] private float _pipeSpawnTimerDelay = 2f;
        [SerializeField] private float _minGapPosition = 3f;
        [SerializeField] private float _maxGapPosition = 7f;
        [SerializeField] private float _minGapSize = 2.5f;
        [SerializeField] private float _maxGapSize = 3.5f;
        [SerializeField] private Vector2 _bottomColliderSize = new Vector2(1f, 1f);
        [SerializeField] private Vector2 _bottomColliderOffset = new Vector2(0f, 0.5f);
        [SerializeField] private Vector2 _topColliderSize = new Vector2(1f, 20f);
        [SerializeField] private Vector2 _topColliderOffset = new Vector2(0f, -9f);


        [NonSerialized] private float _pipeSpawnTimer = 2f;
        [NonSerialized] bool _isRunning = false;
        [NonSerialized] List<PipeData> _pipes = new List<PipeData>();
        [NonSerialized] List<PipeData> _newPipes = new List<PipeData>();
        [NonSerialized] List<PipeData> _removedPipes = new List<PipeData>();
        [NonSerialized] int _pipeIndex = 0;



        public float pipeSpeed => _pipeSpeed;
        public int maxNumberPipes => _maxNumberPipes;
        public float spawnXPosition => _spawnXPosition;
        public float boundXPosition => _boundXPosition;
        public float pipeSpawnTimerDelay => _pipeSpawnTimerDelay;
        public float minGapPosition => _minGapPosition;
        public float maxGapPosition => _maxGapPosition;
        public float minGapSize => _minGapSize;
        public float maxGapSize => _maxGapSize;
        public Vector2 bottomColliderSize => _bottomColliderSize;
        public Vector2 bottomColliderOffset => _bottomColliderOffset;
        public Vector2 topColliderSize => _topColliderSize;
        public Vector2 topColliderOffset => _topColliderOffset;

        public float pipeSpawnTimer => _pipeSpawnTimer;
        public bool isRunning => _isRunning;
        public List<PipeData> pipes => _pipes;
        public List<PipeData> newPipes => _newPipes;
        public List<PipeData> removedPipes => _removedPipes;
        public int pipeIndex => _pipeIndex;


        public override IReducer CreateReducer() => new PipesReducer(this);

        public void SetIsRunning(bool value)
        {
            _isRunning = value;
        }

        public void SetPipeSpawnTimer(float value)
        {
            _pipeSpawnTimer = value;
        }

        public void SetIndexValue(int value)
        {
            _pipeIndex = value;
        }


    }

    public struct PipeData
    {
        public int index;
        public Vector3 position;
        public Vector3 localScale;
        public Vector2 colliderSize;
        public Vector2 colliderOffset;

    }
}