#include <stdio.h>

int main(){
    int a = 10;
    int b, c;
    //%p representa o endereço de memoria 
    printf("&a = %p, a = %d\n", &a,a);
    printf("&b = %p, b = %d\n", &b,b);
    printf("&c = %p, c = %d\n", &c,c);

    b = 20;
    c = a + b; 

    printf("&a = %p, a = %d\n", &a,a);
    printf("&b = %p, b = %d\n", &b,b);
    printf("&c = %p, c = %d\n", &c,c);

    return 0;
}