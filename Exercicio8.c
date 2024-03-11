#include <stdio.h>
#include <stdlib.h>

/*
8. Faça um programa que calcule e imprima a área de um círculo.
*/

int main()
{
    float raioCirc;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raioCirc);

    float areaCirc = 3.1415 * (raioCirc * raioCirc);

    printf("A area do circulo e: %f", areaCirc);
}