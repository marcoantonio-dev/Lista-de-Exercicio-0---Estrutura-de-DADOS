#include <stdio.h>
#include <stdlib.h>

/*
4. Faça um programa que receba um número real e imprima:
• a parte inteira do número;
• a parte fracionária do número;
• arredondamento do número (sem casas decimais).
*/

int main()
{
    float numeroReal;
    printf("Digite um numero real: ");
    scanf("%g",&numeroReal);

    printf("A parte inteira do numero e: %hd \n", (short)numeroReal);

    int numeroint = numeroReal;
    float parteFracionaria;
    parteFracionaria = numeroReal - numeroint;
    printf("A parte fracionario do numero e: %f \n", parteFracionaria);
    printf("O numero arrendodado e: %.0f", numeroReal);
}
