#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
int main()
{
    int sockfd, clilen;
    struct sockaddr_in serv, cli;
    char msg[40];

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555);

    bind(sockfd, (struct sockaddr *)&serv, sizeof(serv));

    while (1)
    {
        clilen = sizeof(cli);
        recvfrom(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&cli, &clilen);
        printf("Message from client :%s\n", msg);
        sendto(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&cli, sizeof(cli));
    }
    close(sockfd);
    return 0;
}