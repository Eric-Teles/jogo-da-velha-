#include "letmat.h"
#include <stdio.h>

int tam = 3;


int val_diag_esq(tabuleiro mesa){
   int count_o = 0,count_x=0;
   
   for (int i = 0; i<tam; i++){
      if (mesa.grade[i][i] == 'x') count_x ++;
      else if (mesa.grade[i][i] == 'o') count_o ++;
   }

   if (count_o == 3 || count_x == 3) return 1;
   else return 0;
}

int val_diag_dir(tabuleiro mesa){
   int count_o = 0,count_x = 0;
   
   for (int i = 0, j= (tam-1); i<tam; i++, j--){
      if (mesa.grade[i][j] == 'x') count_x ++;
      else if (mesa.grade[i][j] == 'o') count_o ++;
   }

   if (count_o == 3 || count_x == 3) return 1;
   else return 0;
}

int val_hrzt (tabuleiro mesa){   
   for (int i = 0; i<tam; i++){
      int count_o = 0,count_x=0;
      for (int j = 0; j <tam; j++){

         if (mesa.grade[i][j] == 'x') count_x ++;
         else if (mesa.grade[i][j] == 'o') count_o ++;

      }
         if (count_o == 3 || count_x == 3) return 1;
   }
   return 0;
}

int val_vrtc(tabuleiro mesa){   
   for (int i = 0; i<tam; i++){
      int count_o = 0,count_x=0;
      for (int j = 0; j <tam; j++){

         if (mesa.grade[j][i] == 'x') count_x ++;
         else if (mesa.grade[j][i] == 'o') count_o ++;

      }
         if (count_o == 3 || count_x == 3) return 1;
   }
   return 0;
}

int val_vlh(tabuleiro mesa){
   int count_m =0;
   for (int i =0; i < tam ; i++){
      for ( int j = 0; j < tam ; j++){
         if (mesa.grade[i][j] != 'x' ||mesa.grade[i][j] != 'o'){
            count_m ++;
         }
      }
   }
   if (count_m == 9) return 1;
   return 0;

}

int val_fim(tabuleiro mesa){

   if (val_diag_dir(mesa)|| val_diag_esq(mesa)|| val_hrzt(mesa)|| val_vrtc(mesa)) return 1;
   else if (val_vlh(mesa)) return 2;
   else return 0;
}


//------------------------------------------------------------------------------------------------------

// Entradas

char def_turno(char turno_ant){
   if (turno_ant == 'x') return 'o';
   else return 'x';
   }

void jogada (int marcacao, tabuleiro mesa, char turno){
   mesa.grade[coordenada[(marcacao-1)].x][coordenada[(marcacao-1)].y] = turno; 
}

