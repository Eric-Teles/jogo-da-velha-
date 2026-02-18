#include "mecanica.h"
#include <stdio.h>

int main( )
{

    int opicao;

   do {
         printf("\n\t\tMENU");
         printf("[0] -> Sair\n[1] -> 1v1\n[2] ->  vs máquina");
         opicao = scanf("%1d", &opicao);
// seria interessante tentar entender um modo de tratar erros em c... Buscar dps.

      switch(opicao)

         {
         case 0:
            sair ();
            break;
         case 1: 
            printf("Jogo 1v1\nEm desenvolvimento");
            break;
         case 2: 
            printf("Jogo contra máquina\n em desenvolvimento");
            break;
         
         default:
            printf("Opicao inválida, leia novamente i letreiro...");
            break;
         }

   }while (opicao);
   

   return 0;
}
