#include <stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    int *c = b;
    printf("%p", &c);
    *c = 200;
    printf("\n%d",*c);
    printf("\nExecutei!");
    return 0;
}