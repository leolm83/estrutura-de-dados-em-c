#include <stdio.h>


int main() {
    int a = 10;
    int *p1 = &a;
    printf("a variavel 'a' possui o valor %d \ne está armazenado no endereço %p\n",a,&a);
    printf("O ponteiro 'p1' está no endereço %p aponta para o endereço da variavel 'a' %p e a variavel apontada possui o valor %d \n",&p1,p1,*p1);
    *p1 = 26;
    printf("%d",a); 
    return 0;
}