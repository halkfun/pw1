#include <stdio.h>

int main() {
    int reactor_core = 12;
    int doubl = reactor_core * 2;
    int sqr = reactor_core * reactor_core;
    
    printf ("[");
    printf ("%d", reactor_core);
    printf (", ");
    printf ("%d", doubl);
    printf (", ");
    printf ("%d", sqr);
    printf ("]");
    return 0;
}