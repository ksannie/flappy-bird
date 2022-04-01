using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Zenject;

namespace Uku.Redux
{
    [CreateAssetMenu(fileName = "UkuReduxZenjectInstaller", menuName = "Uku/Redux/Zenject/UkuReduxZenjectInstaller")]
    public class ReduxZenjectInstaller : ScriptableObjectInstaller<ReduxZenjectInstaller>
    {
        [SerializeField] private List<ScriptableState> _initialStateData;

        public override void InstallBindings()
        {
            Container.Bind<IStore>().FromInstance(new Store(_initialStateData.Select(s => s.CreateReducer()), InstallMiddleware())).AsSingle().NonLazy();
        }

        protected virtual Middleware[] InstallMiddleware()
        {
            return new Middleware[]
            {
               
            };
        }
    }
}
