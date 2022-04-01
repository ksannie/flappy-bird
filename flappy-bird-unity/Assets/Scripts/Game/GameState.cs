using System;

using UnityEngine;

using Uku.Redux;


namespace flappybird
{

    [CreateAssetMenu(fileName = "GameState", menuName = "States/GameState")]
    public class GameState : ScriptableState
    {
        [NonSerialized] private GameScreen _gameScreen = GameScreen.StartScreen;

        public GameScreen gameScreen => _gameScreen;

        public override IReducer CreateReducer() => new GameReducer(this);

        public void SetGameScreen(GameScreen gameScreen)
        {
            _gameScreen = gameScreen;
        }
    }

    public enum GameScreen
    {
        StartScreen,
        PlayScreen,
        EndScreen
    }
}