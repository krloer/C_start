#include <stdio.h>

int main() {
    int child_pid = fork();
    if (child_pid == 0)
    {
        sleep(5);
        printf("I am process #%d\n", getpid());
        return 0;
    } else {
        sleep(5);
        printf("I am process #%d, parent of process #%d\n", getpid(), child_pid);
        return 0;
    }
    
    return 0;
}