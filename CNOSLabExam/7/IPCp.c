#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    int fd[2];
    pid_t childpid;

    char string[] = "Hello,World!!\n";
    char readbuffer[80];

    pipe(fd);

    if ((childpid = fork()) == -1)
    {
        printf("not fork\n :(");
        exit(-1);
    }

    if (childpid == 0)
    {
        close(fd[0]);
        sleep(5);
        write(fd[1], string, (strlen(string) + 1));
        exit(0);
    }
    else
    {
        close(fd[1]);
        read(fd[0], readbuffer, sizeof(readbuffer));
        printf("Received string is: %s", readbuffer);
    }
    return 0;
}