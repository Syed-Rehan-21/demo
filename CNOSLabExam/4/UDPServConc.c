#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/types.h>
int main()
{
    int sockfd, clilen,i=0;
    struct sockaddr_in serv, cli;
    char msg[40];

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555);

    bind(sockfd, (struct sockaddr *)&serv, sizeof(serv));

    while (i <= 2)
    {
        clilen = sizeof(cli);
        recvfrom(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&cli, &clilen);
        printf("Message from client :%s\n", msg);
        if (fork() == 0)
        {
            sendto(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&cli, sizeof(cli));
            exit(0);
        }
        i++;
    }
    close(sockfd);
    return 0;
}