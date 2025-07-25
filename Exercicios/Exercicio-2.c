#include <stdio.h>

int main() {
    int total_gols_jogador, total_partidas;
    float media_gols_por_partida;
    
    printf("Digite o total de gols do jogador:\n");
    scanf("%d",&total_gols_jogador);
    printf("Digite o total de partidas:\n");
    scanf("%d", total_partidas);

    media_gols_por_partida = (total_gols_jogador + total_partidas) / 2;

    printf("A média de gols por partida é: %.2f", media_gols_por_partida);

    return 0;
}