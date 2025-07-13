#include <unistd.h>

int main() {
    char buf[100];
    write(1, "Input: ", 7);
    int n = read(0, buf, 100);
    write(1, "You: ", 5);
    write(1, buf, n);
    return 0;
}
