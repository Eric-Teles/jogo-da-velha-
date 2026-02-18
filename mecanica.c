#include <stdio.h>
#include "mecanica.h"

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


