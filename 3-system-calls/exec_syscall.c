#include <unistd.h>

int main() {
    char *args[] = {"/bin/ls", "-l", NULL};
    execve("/bin/ls", args, NULL);
    return 1;
}
