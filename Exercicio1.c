#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa que receba dois números inteiros, calcule e imprima: • soma dos dois números;
• subtração do primeiro pelo segundo;
• subtração do segundo pelo primeiro;
• multiplicação dos dois números;
• divisão do primeiro pelo segundo (resultado em real);
• divisão do segundo pelo primeiro (resultado em real);
• quociente inteiro da divisão do primeiro pelo segundo;
• quociente inteiro da divisão do segundo pelo primeiro;
• resto da divisão do primeiro pelo segundo;
• resto da divisão do segundo pelo primeiro.
*/

int main()
{

    short numero1 = 0;
    short numero2 = 0;
    short soma = 0;
    
    short subtracao1numPsegundo = 0;
    short subtracao2numPprimeiro = 0;
    
    short multiplicacaoNum1Num2 = 0;

    float divisaoPrimeiroPSegundoReal = 0;
    float divisaoSegundoPPrimeiroReal = 0;

    short quociente1;
    short quociente2;

    short divisaoResto1;
    short divisaoResto2;
    

    printf("Digite o número 1: \n");
    scanf("%hd",&numero1);
    printf("Digite o número 2: \n");
    scanf("%hd",&numero2);
    soma = numero1 + numero2;
    printf("A soma dos dois números é: %hd\n\n", soma);

    subtracao1numPsegundo = numero1 - numero2;
    printf("A subtração do primeiro número pelo segundo é igual a: %hd\n", subtracao1numPsegundo);
    subtracao2numPprimeiro = numero2 - numero1;
    printf("A subtração do segundo número pelo primeiro é igual a: %hd\n\n", subtracao2numPprimeiro);

    multiplicacaoNum1Num2 = numero1 * numero2;
    printf("A multiplicação dos dois números resulta em: %hd\n\n", multiplicacaoNum1Num2);

    for(short i = 0; numero2 ==0; i++){
    if(numero2 != 0){
    divisaoPrimeiroPSegundoReal = (float)numero1 / (float)numero2;
    printf("A divisão do primeiro número pelo segundo número %g\n", divisaoPrimeiroPSegundoReal);
    }else{
        printf("Nao é possivel dividir um numero por 0 \n");
        printf("Digite um numero diferente de 0: \n");
        scanf("%hd",&numero2);
    }
    }

    for(short i=0; numero1 ==0; i++){
    if(numero1 != 0){
    divisaoSegundoPPrimeiroReal = (float)numero2 / (float)numero1;
    printf("A divisão do primeiro número pelo segundo número %g\n\n", divisaoSegundoPPrimeiroReal);
    }else{
        printf("Nao é possivel dividir um numero por 0 \n");
        printf("Digite um numero diferente de 0: \n");
        scanf("%hd",&numero1);
    }
    }

    
    printf("O quociente da divisão do primeiro número pelo segundo é: %hd\n", (quociente1 = numero1/numero2));
    printf("O quociente da divisão do segundo número pelo primeiro é: %hd\n\n", (quociente2 = numero2/numero1));

    printf("O resto da divisão do primeiro número pelo segundo é: %hd\n", (divisaoResto1 = numero1 % numero2));
    printf("O resto da divisão do segundo número pelo primeiro é: %hd\n\n", (divisaoResto2 = numero2 % numero1));
    
}
