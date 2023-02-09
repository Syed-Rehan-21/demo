#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
int main()
{
    int sockfd, connfd, clilen;
    struct sockaddr_in serv, cli;
    char msg[50];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555);

    bind(sockfd, (struct sockaddr *)&serv, sizeof(serv));
    listen(sockfd, 3);

    while (1)
    {
        clilen = sizeof(cli);
        connfd = accept(sockfd, (struct sockaddr *)&cli, &clilen);
        recv(connfd, msg, sizeof(msg), 0);
        printf("Message from client :%s\n",msg);
        send(connfd, msg, sizeof(msg), 0);
        close(connfd);
    }
    close(sockfd);
    return 0;
}