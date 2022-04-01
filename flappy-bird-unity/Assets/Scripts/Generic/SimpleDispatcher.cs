using System;

using UnityEngine;

using Uku.Redux;

namespace flappybird
{

    public class SimpleDispatcher : BaseDispatcher
    {
        [SerializeReference] private IAction _action;

        protected override IAction action => _action switch
        {
            PlayerClickAction => new PlayerClickAction(),
            PressedPlayAction => new PressedPlayAction(),
            PlayerLostAction => new PlayerLostAction(),
            _ => throw new ArgumentOutOfRangeException(nameof(_action)),
        };
    }
}
