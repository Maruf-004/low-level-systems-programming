// file: stack_frame.c
#include <stdio.h>

void inner(int a) {
    int x = a + 5;
    printf("&a = %p\n&x = %p\n", (void*)&a, (void*)&x);
}

int main() {
    int y = 7;
    inner(y);
    return 0;
}
