typedef int ItemType;

struct ListNode
{
    ItemType Item;
    struct ListNode *Link;
};

typedef struct ListNode List;

struct ListPtr
{
    List *Lptr;
};

typedef ListPtr ListPtr;