#include <stdio.h> 
#include<sys/types.h> 
#include<unistd.h> 
#include<sys/wait.h>
int main()
{
    pid_t pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0)
    {
        printf("I'm the child\n");
        printf("Wait for 5 second to exit\n");
        sleep(5);
        char *binaryPath = "/bin/ls";
        char *arg1 = "-lh";
        char *arg2 = "/home";
        execl(binaryPath, binaryPath, arg1, arg2, NULL);
    }
    else
    {
        wait(NULL);
        printf("Child completed\n");
    }
    return 0;
}