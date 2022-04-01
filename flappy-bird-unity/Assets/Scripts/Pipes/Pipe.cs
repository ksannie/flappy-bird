using UnityEngine;

namespace flappybird
{
    public class Pipe : MonoBehaviour
    {
        [SerializeField] private BoxCollider2D _boxCollider2D;

        public BoxCollider2D boxCollider2D => _boxCollider2D;
    }
}