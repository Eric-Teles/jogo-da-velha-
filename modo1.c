#include "modo1.h"
#include <windows.h>
#include <stdio.h>



void _modo1(tabuleiro *mesa, char quadro [5][5]){
   char continuacao;
   mesa->rodada = 0;

   do {
            partida(mesa, quadro);

            printf("\n\t\tMais uma rodada? y/n?\n");
            scanf(" %c", &continuacao);
            while (continuacao != 'y' && continuacao != 'Y' && continuacao != 'n' && continuacao != 'N'){
                  printf("Escolha invalida, aperte y ou n para dar seguimento ao programa.\n");
                  scanf(" %c", &continuacao);
                  mesa_limpa(mesa->grade);
                  system("cls");
                  
            }
         
   }while (continuacao == 'y' || continuacao == 'Y');

   
}