#include <stdio.h>

int main() {
    int idade;

    prinf("Digite a sua idade: \n");
    scanf("%d",&idade);
    if(idade>=18){
    // se a idade for maior ou igual a 18, vai aparecer que é maior de idade, senão, vai aparecer que é menor de idade
    // == igual a 
    // = atribuição
    // >= maior ou igual
    // <= menor ou igual
    // < menor
    // > maior
    // && E lógico (as duas condições devem ser verdadeiras)
    // || OU lógico (somente uma das condições precisa ser verdadeira)
        printf("Você é maior de idade!");
    } else {
        printf("Você é menor de idade!");
    }
    return 0;
}