#include <stdio.h>

int main() {
    //Tipos de variáveis
    int numero = 50;
    float numero_com_virgula = 10.55;
    char caractere = 'a'; //aspas simples para um caractere só
    char nome[8] = "Gabriel"; //aspas duplas para strings
    //sempre colocar o tamanhoDaString(neste caso, 7)+1 para não gerar caracteres inválidos 
    printf("O número é: %d\n", numero);
    printf("O número com vírgula é: %.2f\n", numero_com_virgula);
    printf("O caractere é: %c\n", caractere);
    printf("O nome é: %s", nome);
    return 0;
}