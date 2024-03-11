#include <stdio.h>;
#include <stdlib.h>;

/*
2. Faça um programa que receba três notas de um aluno, calcule e imprima a média aritmética 
entre essas notas.
*/

int main()
{
    float nota1;
    float nota2;
    float nota3;

    printf("Digite a nota do aluno 1: \n");
    scanf("%f",&nota1); 
    printf("\n\n");
    printf("Digite a nota do aluno 3: \n");
    scanf("%f",&nota2); 
    printf("\n\n");
    printf("Digite a nota do aluno 2: \n");
    scanf("%f",&nota3); 
    printf("\n\n");

    float mediaAritmetica = (nota1 + nota2 + nota3) / 3;

    printf("A media aritmetica das tres notas foi de: %g", mediaAritmetica);


}