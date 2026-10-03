#include <stdio.h>

void phase_2() {
    printf("BETA ");
}

void phase_1() {
    printf("ALPHA ");
    phase_2();
    printf("GAMMA ");
}

int main() {
    printf("START ");
    phase_1();
    printf("END");

return 0;
}