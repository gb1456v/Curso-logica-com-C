#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    int qtd_gols;

    printf("Digite o primeiro nome do jogador:\n");
    scanf("%s",&nome);

    printf("Digite a idade do jogador:\n");
    scanf("%d",&idade);

    
    printf("Digite quantos gols o jogador fez desde o inicio da carreira até hoje:\n");
    scanf("%d",&qtd_gols);

    printf("O nome do jogador é %s, ele tem %d anos e foram %d gols ao longo de toda a sua carreira.\n", nome, idade, qtd_gols);
    return 0;
}