#include <stdio.h>

int main(){
    int tempo_jogado,horas, minutos;

    printf("Digite o tempo jogado em minutos\n");
    scanf("%d",&tempo_jogado);

    horas = tempo_jogado / 60;
    minutos = tempo_jogado % 60;

    printf("O jogo durou %d horas e %d minutos.", horas, minutos);
    
    return 0;
}
