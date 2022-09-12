#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char input[256];
    int child_pid;

    while(true) {
        printf("user@path$ ");
        fflush(stdout); // ??
        fgets(input, 256, stdin);
        
        child_pid = fork();
        if (child_pid == 0)
        {
            input[strlen(input)-1] = '\0';
            char *newargv[] = { input, NULL };

            printf("You entered %s", input);

            execve(input, newargv, NULL);
        } else {
            wait(child_pid);
        }        
    }
}