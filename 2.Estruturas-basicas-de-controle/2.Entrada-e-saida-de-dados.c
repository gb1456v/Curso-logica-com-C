#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: \n");
    scanf("%d",&numero); // o & indica que o valor vai ser salvo na memória
    printf("O numero digitado foi o: %d", numero);
    return 0;
}