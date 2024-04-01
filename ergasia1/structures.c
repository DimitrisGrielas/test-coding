#include <stdio.h>
#include "structures.h"

typedef int STitems;

typedef struct stack {
    STitems item;
    struct stack *STptr;
} StackType;
