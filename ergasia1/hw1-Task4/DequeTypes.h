typedef int ItemType;

struct DequeNode
{
    ItemType Item;
    struct DequeNode *Link;
};

typedef struct DequeNode Deque;

struct DequePtr
{
    Deque *Front;
    Deque *Rear;
};

typedef struct DequePtr DequePtr;