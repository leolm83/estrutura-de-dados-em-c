//a partir dela é possivel usar a constante NULL
#include <stdlib.h>
#include <stdio.h>
int main(){
    int b = 10;
    int *p2 = NULL;
    //a linha comentada abaixo irá dar erro pois p2 não aponta pra lugar algum (no momento!!!)
    //printf("p2 está no endereço %p, guarda o valor %d",&p2,*p2);
    printf("\np2 está no endereço %p, guarda o endereço de memória %p",&p2,p2);
    
    p2 = &b;
    printf("\np2 está no endereço %p,e agora aponta para 'b' no endereço %p guarda o valor %d",&p2,p2,*p2);
    return 0;
}