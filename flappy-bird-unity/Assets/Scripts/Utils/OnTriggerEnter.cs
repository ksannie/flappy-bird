using UnityEngine;
using UnityEngine.Events;

namespace flappybird
{
    public class OnTriggerEnter: MonoBehaviour
    {
       public UnityEvent onTriggerEnter;

        private void OnTriggerEnter2D(Collider2D collision)
        {
            onTriggerEnter.Invoke();
        }


    }
}