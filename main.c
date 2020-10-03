#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    int * a = NULL;
    int *c;
    int b = 12, d = 30;
    a = &b;
    c = &d;
    printf("%i", a);
    printf("\n%i", c);
    printf("\n%i", *a);
    printf("\n%i", *c);
    getch();
}