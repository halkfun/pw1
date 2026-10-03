#include <stdio.h>

#define NODE_ID 42

void ping(){
    printf("PING");
}

void pong(){
    printf("PONG");
}

void handshake() {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main() {
    int packets_size = NODE_ID * 4;
    int total_transfer = packets_size * 3;

    handshake();
    printf(":%d\n", packets_size);

    handshake();
    printf(":%d\n", total_transfer);
    
    printf("SESSION:CLOSED");

    return 0;
}