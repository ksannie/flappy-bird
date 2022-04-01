using Uku.Redux;

namespace flappybird
{

    public class GameReducer : BaseReducer<GameState>
    {
        public GameReducer(GameState state) : base(state)
        {
        }

        public override bool Reduce(IAction action)
        {
            return action switch
            {
                PlayerLostAction => ApplyPlayerLostAction(),
                PressedPlayAction => ApplyPressedPlayAction(),
                _ => false
            };
        }

        private bool ApplyPlayerLostAction()
        {
            state.SetGameScreen(GameScreen.EndScreen);
            state.SetChanged();
            return true;
        }

        private bool ApplyPressedPlayAction()
        {
            state.SetGameScreen(GameScreen.PlayScreen);
            state.SetChanged();
            return true;
        }


      

    }
}