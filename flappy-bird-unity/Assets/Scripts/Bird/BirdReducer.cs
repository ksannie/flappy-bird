using UnityEngine;

using Uku.Redux;

namespace flappybird
{

    public class BirdReducer : BaseReducer<BirdState>
    {
        public BirdReducer(BirdState state) : base(state)
        {
        }

        public override bool Reduce(IAction action)
        {
            return action switch
            {
                PlayerClickAction => ApplyPlayerClickAction(),
                PlayerLostAction => ApplyPlayerLostAction(),
                JumpDoneAction => ApplyJumpDoneAction(),
                BirdPositionAction birdPositionAction => ApplyBirdPositionAction(birdPositionAction),
                _ => false
            };
        }

        private bool ApplyPlayerClickAction()
        {
            if (!state.isInFreeFall)
            {
                state.SetInFreeFall(true);
            }
            state.SetJumpOrdered(true);
            state.SetChanged();
            return true;
        }

        private bool ApplyPlayerLostAction()
        {
            
            state.SetInFreeFall(false);
            state.SetPosition(state.initialPosition);
            state.SetChanged();
            return true;
        }



        private bool ApplyBirdPositionAction(BirdPositionAction birdPositionAction)
        {
            state.SetPosition(birdPositionAction.payload);
            state.SetChanged();
            return true;
        }

        private bool ApplyJumpDoneAction()
        {
            state.SetJumpOrdered(false);
            state.SetChanged();
            return true;
        }

    }
}