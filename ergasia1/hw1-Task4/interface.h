DequePtr create();

int SizeOf(DequePtr *);

int IsEmpty(DequePtr *);

void Enqueue(DequePtr *, ItemType);

void push(DequePtr *, ItemType);

ItemType pop(DequePtr *, ItemType);

ItemType Dequeue(DequePtr *, ItemType);

void Print(DequePtr *);