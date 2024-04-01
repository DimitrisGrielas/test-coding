#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

typedef int STitems;

typedef struct stack {
    STitems item;
    struct stack *link;
} StackType;

typedef struct StInf {
    int count;
    StackType * STptr;

} StInf;

void initialize(StInf *Ptr1, StInf *Ptr2) {
    Ptr1->count = 0;
    Ptr1->STptr = NULL;
    Ptr2->count = 0;
    Ptr2->STptr = NULL;
}

void sort(StInf * Ptr1, StInf * Ptr2) {
    int i;
    StackType * temp;
    Ptr2->STptr = temp;
    for(i = 0; i < Ptr1->count; i++) {
        
    }
}


int main(void) {
    StInf *Ptr1, *Ptr2;
    int n;
    char c;
    initialize(Ptr1, Ptr2);
    /*do {
        printf("Enter stack item: | PRESS e TO EXIT!\n");
        c = getchar();
        n = atoi(c);
        printf("%d\n", n);
    } while(c != 'e');*/
    StackType ST1, ST2, ST3, ST4, ST5, ST6;
    ST1.item = 5;
    ST2.item = 2;
    ST3.item = 4;
    ST4.item = 1;
    ST5.item = 7;
    ST6.item = 3;
    ST1.link = &ST2;
    ST2.link = &ST3;
    ST3.link = &ST4;
    ST4.link = &ST5;
    ST5.link = &ST6;
    ST6.link = NULL;
    Ptr1->STptr = &ST1;
    Ptr1->count = 6;
    Ptr2->STptr = (StackType *)malloc(sizeof(StackType) * 6);
    return 0;
}
