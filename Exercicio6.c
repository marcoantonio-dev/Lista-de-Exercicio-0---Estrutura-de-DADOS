#include <stdio.h>
#include <stdlib.h>


/*
6. Faça um programa que receba a idade de uma pessoa em anos, calcule e imprima essa idade em: 
• Meses, Dias, Horas e Minutos.
*/

int main()
{
    short idade;
    printf("Digite a sua idade: \n");
    scanf("%hd",& idade);
    printf("\n");
    
    //aproximação de dias possíveis
    short anobissexto = idade/4;

    short meses;
    meses = idade * 12;
    short dias = idade * 365 + anobissexto;
    int horas = dias * 24;
    long minutos = horas *60;

    printf("Voce tem %hd meses de vida: \n", meses);
    printf("Voce tem: %hd dias de vida\n", dias);
    printf("Voce tem: %d horas de vida\n", horas);
    printf("Voce tem: %ld minutos de vida\n", minutos);


}