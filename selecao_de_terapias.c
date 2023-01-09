#include <stdio.h>
#include <string.h>

#define TERAPIAMANUAL 120
#define RPG 150
#define DRENAGEM 130
#define FISIOCONV 110



int main (){



for (int i = 1 ; i <= 10; i++) {
   
   
    printf ("\nOla Senhor(a), qual tratamento deseja?\n");
    printf ("\n1- Terapia manual\n");
    printf ("\n2- RPG\n");
    printf ("\n3- Drenagem\n");
    printf ("\n4- Fisioterapia Convencional\n");
    int opcao;
    scanf ("%d", &opcao);
     
        if (opcao == 1) {

            printf("\nOk, voce escolheu a opcao 1. Vamos para o proximo passo.");
            printf("\nQuantos dias da semana vai fazer o atendimento?\n");
            int dias;
            scanf("%d", &dias);
            printf ("\nO senhor escolheu %d dias da semana.\n", dias);
            int valor;
       
            valor = (TERAPIAMANUAL * dias);
            printf("O valor do seu tratamento e: %d reais", valor );
            break;
        } else if ( opcao == 2 ){
            printf("\nOk, voce escolheu a opcao 2. Vamos para o proximo passo.");
            printf("\nQuantos dias da semana vai fazer o atendimento?\n");
            int dias;
            scanf("%d", &dias);
            printf ("\nO senhor escolheu %d dias da semana.\n", dias);
            int valor;
           
            valor = (RPG * dias);
            printf("O valor do seu tratamento e: %d reais", valor );
            break;
        } else if (opcao == 3) {
            printf ("\nOk, voce escolheu a opcao 3. Vamos para o proximo passo.");
            printf("\nQuantos dias da semana vai fazer o atendimento?\n");
            int dias;
            scanf("%d", &dias);
            printf ("\nO senhor escolheu %d dias da semana.\n", dias);
            int valor;
           
            valor = (DRENAGEM * dias);
            printf("O valor do seu tratamento e: %d reais", valor );
            break;
        } else if (opcao == 4) {
            printf("\nOk, voce escolheu a opcao 4. Vamos para o proximo passo.");
            printf("\nQuantos dias da semana vai fazer o atendimento?\n");
            int dias;
            scanf("%d", &dias);
            printf ("\nO senhor escolheu %d dias da semana.\n", dias);
              int valor;
                
            valor = (FISIOCONV * dias);
            printf("O valor do seu tratamento e: %d reais", valor );
            break;
        } else {
            printf ("\nEscolha uma opcao valida!\n");
        }
    
} 



    printf (" \n Para melhor atende-lo, vamos continuar com o agendamento da consulta.\t");
  
   for (int i =1; i<=4; i++) {
    printf("\nDigite seu nome\t");
    char nome; 
    scanf("%c", &nome);
    break;
   }
    for (int i = 1; i<= 4; i++) {
        
        char novonome (char *nome);
        printf("\nTudo bem sr(a) %c , ha quantos dias voce esta sentindo dor?\t", novonome);
        int diasdedor;
        scanf("%d", &diasdedor); 

    printf("\nEntao o voce esta a %d dias com dor, confere senhor(a) %c\t", diasdedor, nome);
    }

}

