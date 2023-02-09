#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
int main()
{
    int sockfd,servlen;
    struct sockaddr_in serv;
    char msg1[50], msg2[50];

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555);

    printf("Enter a string: ");
    scanf("%s", msg1);

    servlen = sizeof(serv);
    sendto(sockfd, msg1, sizeof(msg1), 0, (struct sockaddr *)&serv, sizeof(serv));
    recvfrom(sockfd, msg2, sizeof(msg2), 0, (struct sockaddr *)&serv, &servlen);
    
    printf("Msg from the server is %s", msg2);
    close(sockfd);
    return 0;
}