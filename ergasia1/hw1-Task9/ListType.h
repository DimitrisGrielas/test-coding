typedef int ItemType;
struct NodeTag
{
    ItemType Item;
    struct NodeTag *Link;
};
typedef struct NodeTag NodeType;
typedef NodeType *NodePtr;