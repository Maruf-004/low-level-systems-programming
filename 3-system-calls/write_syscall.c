#include <unistd.h>

int main() {
    const char *msg = "Hello via write syscall\n";
    write(1, msg, 22);  // fd=1 → stdout
    return 0;
}
