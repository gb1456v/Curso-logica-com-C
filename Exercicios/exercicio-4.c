#include <stdio.h>

int main() {

    int vitorias, empates, derrotas, pontos;

    printf("Digite o nº de vitórias:\n");
    scanf("%d",&vitorias);
    printf("Digite o nº de empates:\n");
    scanf("%d",&empates);
    printf("Digite o nº de derrotas:\n");
    scanf("%d",&derrotas);

    pontos = ((vitorias * 3) + (empates * 1) + (derrotas * 0));
    
    printf("Sua pontuação total é: %d", pontos);

    return 0;
}