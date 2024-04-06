typedef struct StackNode Stack;

typedef struct StackPtr StackPtr;

typedef char ItemType;

char * Input();

void test_Input(char *);

char * parenthesis(char *);

StackPtr initialize();

void push(StackPtr *, ItemType);

ItemType pop(StackPtr *);