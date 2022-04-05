using Uku.Redux;

namespace flappybird
{

    public class TimerReducer : BaseReducer<TimerState>
    {
        public TimerReducer(TimerState state) : base(state)
        {

        }

        public override bool Reduce(IAction action)
        {
            return action switch
            {
                PressedPlayAction => ApplyPressedPlayAction(),
                PlayerClickAction => ApplyPlayerClickAction(),
                PlayerLostAction=> ApplyPlayerLostAction(),
                TimerUpdateAction timerUpdateAction => ApplyTimerUpdateAction(timerUpdateAction),
                _ => false
            };
        }

        private bool ApplyPressedPlayAction()
        {
            state.SetTimer(0f);
            state.SetChanged();
            return true;
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
            state.SetChanged();
            return true;
        }

        private bool ApplyTimerUpdateAction(TimerUpdateAction timerUpdateAction)
        {
            if (state.isRunning)
            {
                float deltaTime = timerUpdateAction.payload;
                state.SetTimer(state.timer + deltaTime);
                state.SetChanged();
                return true;
            }
            return false;
        }

    }
}