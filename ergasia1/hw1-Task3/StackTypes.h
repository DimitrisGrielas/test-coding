typedef char ItemType;

struct StackNode 
{
    ItemType Item;
    struct StackNode *Link;
};

typedef struct StackNode Stack;

struct StackPtr
{
    Stack *STptr;
};

typedef struct StackPtr StackPtr;