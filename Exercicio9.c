#include <stdio.h>
#include <stdlib.h>

/*
9.Faça um programa que calcule e imprima a área de um trapézio.
*/

int main()
{
    float baseMaior;
    float baseMenor;
    float altura;

    printf("Digite a baseMaior do trapezio em metros: ");
    scanf("%f",&baseMaior);
    printf("Digite a baseMenor do trapezio em metros: ");
    scanf("%f",&baseMenor);
    printf("Digite a altura do trapezio em metros: ");
    scanf("%f",&altura);

    float areaTrapezio = ((baseMaior + baseMenor) / 2) * altura;

    printf("A area do trapezio e: %f metros", areaTrapezio);

}