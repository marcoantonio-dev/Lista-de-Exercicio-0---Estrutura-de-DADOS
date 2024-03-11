#include <stdio.h>
#include <stdlib.h>

/*
7. Faça um programa que calcule a área de um triângulo.
*/

int main()
{
    float baseTri;
    float alturaTri;

    printf("Informe o valor da base do triangulo: ");
    scanf("%f",&baseTri);
    printf("Informe o valor da altura do triangulo: ");
    scanf("%f",&alturaTri);

    float areaTri = (baseTri * alturaTri) /2;

    printf("A area do triangulo é: %f", areaTri);
}