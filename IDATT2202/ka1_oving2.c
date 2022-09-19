#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
pthread_t thread1;

void *func()
{
    int localvar = 2;
    printf("func() with localvar @ 0x%08x\n", &localvar);
    printf("func() frame address @ 0x%08x\n", __builtin_frame_address(0));
    localvar++;
    if (localvar > 100)
    {
        pthread_exit(localvar);
    } else {
        func(NULL);
    }
    
}

int main()
{
    printf("main() frame address @ 0x%08x\n", __builtin_frame_address(0));
    pthread_create(&thread1, NULL, func, NULL);
    long exitValue;
    pthread_join(thread1, (void*)&exitValue);
    printf("Thread returned with %ld\n", exitValue);
    exit(0);
}