#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h>
int main()
{
    int s,peerlen, clilen;
    struct sockaddr_in peer, cli;

    peer.sin_family = AF_INET;
    peer.sin_addr.s_addr = inet_addr("127.0.0.1");
    peer.sin_port = htons(5555);

    s = socket(AF_INET, SOCK_STREAM, 0);
    connect(s, (struct sockaddr *)&peer, sizeof(peer));
    send(s, "ABCDEF!", 7, 0);

    peerlen = sizeof(peer);
    if (getpeername(s, (struct sockaddr *)&peer, &peerlen) == -1)
    {
        perror("getpeername() failed");
        return -1;
    }

    clilen = sizeof(cli);
    if (getsockname(s, (struct sockaddr *)&cli, &clilen) == -1)
    {
        perror("getsockname() failed");
        return -1;
    }

    printf("Peer's IP address is: %s\n", inet_ntoa(peer.sin_addr));
    printf("Peer's port address is: %d\n", ntohs(peer.sin_port));
    printf("Client's IP address is: %s\n", inet_ntoa(cli.sin_addr));
    printf("Client's port address is: %d\n", ntohs(cli.sin_port));
    char msg[40];
    recv(s, msg, 7, 0);
    close(s);
    return 0;
}