using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace flappybird
{
    public class PointerDownHandler: MonoBehaviour, IPointerDownHandler
    {
       public UnityEvent onPointerDown;

        public void OnPointerDown(PointerEventData eventData)
        {
            onPointerDown.Invoke();
        }


    }
}