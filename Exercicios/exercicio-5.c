#include <stdio.h>

int main() {
    //variaveis
    double salario1,salario2, diferenca;
    char jogador1[20];
    char jogador2[20];
    //entrada de dados
    printf("Digite o nome do jogador 1:\n");
    scanf("%s", jogador1);
    printf("Digite o nome do jogador 2:\n");
    scanf("%s", jogador2);    
    printf("Digite o salario do %s:\n", jogador1);
    scanf("%lf", &salario1);
    printf("Digite o salario do %s:\n", jogador2);
    scanf("%lf", &salario2);

    //processamento
    if (salario1 > salario2) {
        diferenca = salario1 - salario2;
    } else {
        diferenca = salario2 - salario1;
    }
    //saida

    printf("A diferença entre os salarios e de:%.2lf", diferenca);
}