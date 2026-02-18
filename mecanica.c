#include <stdio.h>
#include "mecanica.h"
#include <windows.h>


void mesa_limpa(tabuleiro mesa){
   for (int i = 0; i<3; i++){
      for (int j =0; j<3; j++){
         mesa.grade[i][j] = (char)((i+1));       
      }
   }
}

void ler_mesa (tabuleiro mesa){
   // i = linhas; j= colunas --> verificar na impressão se sai corretamente.
   for (int i = 0; i<3; i++){
      for (int j =0; j<3; j++){

      }
   }
}


void partida (char turno, int marcacao, tabuleiro mesa){

   int check = 0;
   char lance= '0';

   do{
      while (lance<= 49 || lance >= 57)  scanf(" %c", &lance);

      if (mesa.grade[coordenada[(lance-1)].x][coordenada[(lance-1)].y] != 'x' || mesa.grade[coordenada[(lance-1)].x][coordenada[(lance-1)].y] != 'o'){
         turno = def_turno(turno);
         jogada(lance,mesa,turno);
         check = val_fim(mesa);
         // system ("cls");
         // imprime_mesa();

      } else {
         while (lance< 49 || lance > 57)  scanf(" %c", &lance);
         // verificar o que fazer: a parte gráfica deveria apontar o erro   e contiuar mosrtrando a mesa. 
         // poderia mostrar o aviso e printar novamente a mesa...  
      }

   }while (check == 0); 


   if (check  == 1){
      system("cls");
      printf("\n\n               VITÓRIA\nVencedor: %d", turno);
      system('pause');
   }else if (check == 2){
      system ("cls");
      printf("\n\n               DEU VÉIA \n             :(");
      system('pause');

   }else {
      system("cls");
      printf ("\nERRO :: problema no retorno de validação de turno ou na função de partida.\n");
   }

}


