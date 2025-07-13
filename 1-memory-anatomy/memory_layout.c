// file: memory_layout.c
#include <stdio.h>
#include <stdlib.h>

int global_var = 42; // .data

int main() {
    int local_var = 10;         // stack
    int *heap_var = malloc(4);  // heap
    *heap_var = 99;

    printf("  .text (main):      %p\n", (void*) main);
    printf("  .data (global):    %p\n", (void*) &global_var);
    printf("  heap (malloc):     %p\n", (void*) heap_var);
    printf("  stack (local_var): %p\n", (void*) &local_var);

    free(heap_var);
    return 0;
}
