#include"modo1.h"
#include <stdio.h>
#include <windows.h>


int main( ){
   system ("chcp 65001");
   char quadro[5][5];
   tabuleiro mesa;
   mesa_limpa((mesa.grade));

   int opicao;

   do {
         system("cls");
         printf("\n\t\tMENU");
         printf("\n[0] -> Sair\n[1] -> 1v1\n[2] -> vs máquina\n[3] -> Apresentação\n");
         // aprender a tratar exceções
         scanf(" %d", &opicao);
// seria interessante tentar entender um modo de tratar erros em c... Buscar dps.

      switch(opicao)

         {
         case 0:
            sair ();
            break;
         case 1: 
               system("cls");
               printf("\nJogo 1v1\nEm desenvolvimento\n\n");
               _modo1(&mesa, quadro);
               break;
         case 2: 
               system("cls");
               printf("Jogo contra máquina\n em desenvolvimento");
               system("cls");
               break;
         case 3:
               apresenta();
               break;
         
         default:
               system("cls");
               printf("Opicao inválida! Observe o menu...");
               Sleep (1000);
               system("cls");
               break;
         }

   }while (opicao != 0);
   

   return 0;
}
