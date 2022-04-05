using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class TimerUpdater : MonoBehaviour
    {

        private IStore _store;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
        }


        private void Update()
        {
            _store.Dispatch(new TimerUpdateAction { payload = Time.deltaTime });
                
        }

    }
}
    