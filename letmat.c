#include "letmat.h"



ponto coordenada[9] = {
    {.x = 0, .y = 0},
    {.x = 0, .y = 1},
    {.x = 0, .y = 2},
    {.x = 1, .y = 0},
    {.x = 1, .y = 1},
    {.x = 1, .y = 2},
    {.x = 2, .y = 0},
    {.x = 2, .y = 1},
    {.x = 2, .y = 2}
};



#define tam 3
int val_diag_esq(tabuleiro *mesa){
   int count_o = 0,count_x=0;
   
   for (int i = 0; i<tam; i++){
         if (mesa->grade[i][i] == 'x') count_x ++;
         else if (mesa->grade[i][i] == 'o') count_o ++;
   }

   if (count_o == 3 || count_x == 3) return 1;
   else return 0;
}

int val_diag_dir(tabuleiro *mesa){
   int count_o = 0,count_x = 0;
   
   for (int i = 0, j= (tam-1); i<tam; i++, j--){
         if (mesa->grade[i][j] == 'x') count_x ++;
         else if (mesa->grade[i][j] == 'o') count_o ++;
   }

   if (count_o == 3 || count_x == 3) return 1;
   else return 0;
}

int val_hrzt (tabuleiro *mesa){   
   for (int i = 0; i<tam; i++){
         int count_o = 0,count_x=0;
         for (int j = 0; j <tam; j++){

               if (mesa->grade[i][j] == 'x') count_x ++;
               else if (mesa->grade[i][j] == 'o') count_o ++;

         }
         if (count_o == 3 || count_x == 3) return 1;
   }
   return 0; 
}

int val_vrtc(tabuleiro *mesa){   
   for (int i = 0; i<tam; i++){
         int count_o = 0,count_x=0;
         for (int j = 0; j <tam; j++){

               if (mesa->grade[j][i] == 'x') count_x ++;
               else if (mesa->grade[j][i] == 'o') count_o ++;

         }
         if (count_o == 3 || count_x == 3) return 1;
   }
   return 0;
}


int val_vlh(tabuleiro *mesa){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (mesa->grade[i][j] != 'x' && mesa->grade[i][j] != 'o'){
                return 0; //  tem espaço
            }
        }
    }
    return 1; // deu véa  kdksldkkd
}

int val_fim(tabuleiro *mesa){

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

void jogada (int marcacao, tabuleiro *mesa, char turno){
        mesa->grade[coordenada[(marcacao)].x][coordenada[(marcacao)].y] = turno;       
}

// Parte gráfica 
// Melhorar dps, agr é só para ver se funciona, ou seja, vou precisar adaptar.
// Posso fazer isso em uma branch ou em outro repositório.

void imprime_m(char p_grade [5][5]){
        for (int i=0 ; i <5; i++){
            printf("\t\t\t\t\t");
            for (int j = 0; j<5; j++){
                printf("%c", p_grade[i][j]);
            }// for j
            printf("\n");
        }//for i
    
}//fim func

void imprime_gr(char p_grade[3][3]){
   
    printf("\n\n#############################################\n\n");   
    
    for (int i=0 ; i <3; i++){
            printf("\t\t\t\t\t");
            for (int j = 0; j< 3; j++){
                printf("%c", p_grade[i][j]);
            }// for j
            printf("\n");
        }//for i
    printf("\n#############################################\n\n");
}

void show_mesa_p (tabuleiro *mesa, char p_grade[5][5]){
    int k = 0, l = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (i % 2 == 0 && j % 2 == 0) {
                p_grade[i][j] = mesa->grade[k][l];
                l++;
                if (l == 3) {
                    l = 0;
                    k++;
                }
            }
            else if (i % 2 == 1 && j % 2 == 1){
                p_grade[i][j] = '+';
            }
            else if (i % 2 == 1){
                p_grade[i][j] = '-';
            }
            else {
                p_grade[i][j] = '|';
            }
        }
    }
    imprime_m(p_grade);
}
