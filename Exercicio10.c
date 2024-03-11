#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.
*/

int main()
{
    short salario;
    printf("Digite o salario do funcionario: ");
    scanf("%hd",&salario);

    float imposto = 0.5;
    float dinheiroDoGovernoT_T = salario * 0.05;

    printf("O imposto de renda a ser pago é de: %2.f reais", dinheiroDoGovernoT_T);
}