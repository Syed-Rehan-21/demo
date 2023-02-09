#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
int main()
{
    int sockfd;
    struct sockaddr_in serv;
    char msg1[50], msg2[50];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    serv.sin_family = AF_INET;
    serv.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv.sin_port = htons(5555); 

    connect(sockfd, (struct sockaddr *)&serv, sizeof(serv));
    printf("Enter a string: ");
    scanf("%s", msg1);

    send(sockfd, msg1, sizeof(msg1), 0);
    recv(sockfd, msg2, sizeof(msg2), 0);

    printf("Msg received from server is: %s", msg2);
    close(sockfd);
    return 0;
}