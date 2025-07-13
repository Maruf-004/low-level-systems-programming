#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) _exit(0);
    wait(NULL);
    printf("Child done, parent PID=%d\n", getpid());
    return 0;
}
