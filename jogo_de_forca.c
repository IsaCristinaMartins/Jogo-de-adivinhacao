#include <stdio.h> 
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Pode ser colocado noutro arquivo e chamar num #include "nomeDoPrograma.h"
void abertura ();
void chuta ();
void desenhaforca ();
void escolhepalavra ();
int acertou ();
int enforcou ();
int jachutou (char letra);
void adicionarpalavra ();

//Variaveis globais
char palavrasecreta [20];
char chutes [26];
int tentativas = 0;

void abertura () {
    printf (" *********************\n");
    printf (" *    Jogo de Forca    *\n");
    printf (" ***********************\n\n");
}

void chuta () {
        char chute; 
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes [tentativas] = chute;
        tentativas++;       
}

int jachutou (char letra) {

          int achou = 0;
           
             for (int j = 0; j < tentativas; j++) {
               if (chutes [j] == letra [i]) {
                    achou = 1;
                    break;
                }
           }

           return achou; 
}

void desenhaforca  (){

      for (int i = 0; i < strlen (palavrasecreta); i++ ) {

           int achou = jachutou (palavrasecreta[i]);
          
            if (achou) {
                printf("%c ", palavrasecreta [i]);
            } else {
                printf ("_ ");
            }

        }
        printf ("\n");
}
//Permite que usuario ao final do jogo, adicione uma palavra ao banco de dados. 
void adicionarpalavra () {

    char quero;
    printf("Voce deseja adicionar uma nova palavra no jogo? (S ou N)");
    scanf (" %c", &quero);

    if (quero == 'S') {

        char novapalavra [20];
        printf ("Qual a nova palavra? ");
        scanf ("%s", novapalavra);

        FILE* f;
            //r = leitura; r+ = leitura e escrita 
        f = fopen("palavras.txt", "r+");
            if (f == 0 ) {
                printf ("Desculpe, banco de dados não disponivel\n\n");
                exit (1);
            }
        
        int qtd;
        fscanf (f,"%d", &qtd);
        qtd++;

        fseek(f, 0, SEEK_SET);
        fprintf (f, "%d", qtd);

        fseek (f, 0, SEEK_END);
        fprintf (f, "\n%s", novapalavra);
        
        fclose(f);
    }

}



// é preciso fazer um arquivo com as palavras escolhidas. 
void escolhepalavra () {
    FILE* f;

    f = fopen ("palavras.txt", "r");
        if (f == 0) {
            printf ("Desculpe, banco de dados nao disponivel \n\n");
            exit (1);
        }

    int qtddepalavras; 
    fscanf (f, "%d", &qtddepalavras);

    srand (time (0));
    int randomico = rand () % qtddepalavras;
        for (int i = 0; i<= randomico; i++) {
            fscanf (f, "%s", palavrasecreta); 
        }


    fclose (f);
}

int acertou () {
    
    for (int i = 0; i< strlen(palavrasecreta); i++ ) {
       if (!jachutou (palavrasecreta [i])){
        return = 0;
       }     

    }
    return 1;
}
int enforcou () {
    int erros = 0;

    for (int i = 0; i< tentativas; i++) {
        int existe = 0;

        for (int j =0; j<strlen (palavrasecreta); j++) {
           
            if (chutes[i]== palavrasecreta[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) erros++;
    }

    return erros >= 5; 

}

int main () {
    
    escolhepalavra();
    abertura();

    do {

      desenhaforca();
      chuta();
                 
    } while (!acertou() && !enforcou()); 

adicionarpalavra (); 

}