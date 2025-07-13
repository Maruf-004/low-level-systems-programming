#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0)
        printf("[child] PID=%d\n", getpid());
    else
        printf("[parent] PID=%d, child=%d\n", getpid(), pid);
    return 0;
}
