#include <stdio.h> 
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main () {
    // imprime cabeçalho do jogo
    printf ("**********************\n");
    printf("\nBem vindo ao nosso jogo de adivinhação\n");
    printf ("\n**********************\n");

     

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        int chute; 

        printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute?");
        scanf("%d", &chute); 

        if (chute <0) {
            printf("Você não pode digiter número negativo\n");
            i--;
            continue; 
        }

        int segundos = time (0);
            srand(segundos);
        int n1 = rand ();

        int numerosecreto = n1 % 100;
        int maior = (chute > numerosecreto);
        int acertou = (chute == numerosecreto);
    
        
         if (acertou) {
            printf("Parabéns, você acertou \n");
            break;

         } else if (maior){
            printf("\nSeu chute foi maior que o número secreto\n");
         }
            else {
                printf("\nSeu chute foi menor que o número secreto\n");
            }


    double pontosperdidos = (chute - numerosecreto) /2.0;
    double pontos = 1000;

    pontos = pontos - pontosperdidos;

     if (pontosperdidos < 0 ){
        pontosperdidos = pontosperdidos * -1/
         }

    printf("\nFim de jogo\n");
    printf ("Total de pontos %.1f \n", pontos);
    }
  
}

//Escreva um programa que peça um inteiro ao usuário,
 // e com esse inteiro, ele imprima, linha-a-linha, 
//a tabuada daquele número até o 10. 
//Por exemplo, se ele escolher o número 2, 
//o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.