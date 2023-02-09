#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
int main()
{
    int sockfd, connfd, clilen,i=0;
    struct sockaddr_in serv, cli;
    char msg[10];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555);

    bind(sockfd, (struct sockaddr *)&serv, sizeof(serv));
    listen(sockfd, 3);

    while (i <= 2)
    {
        clilen = sizeof(cli);
        connfd = accept(sockfd, (struct sockaddr *)&cli, &clilen);
        if (fork() == 0)
        {
            close(sockfd);
            recv(connfd, msg, sizeof(msg), 0);
            printf("Message from client :%s\n",msg);
            send(connfd, msg, sizeof(msg), 0);
            break;
        }
        i++;
        close(connfd);
    }
    close(sockfd);
    return 0;
}