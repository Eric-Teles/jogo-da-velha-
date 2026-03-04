
#ifndef LETMAT_H 
   #define LETMAT_H
   #include <stdio.h>
typedef struct  coordenada
{
   int x;
   int y;
}ponto;

extern ponto coordenada[9];

   typedef struct tabuleiro
{
   char grade[3][3];
   int rodada;
   char vencedor;

   // penso numa possibildade de sistema de registro de jogo... tlvz seja interessante.
   // Logo, em algum momento deverá ter uma função voltada para registo.

}tabuleiro;


//------------------------------------*
// verificações para fim de jogo 
int val_diag_esq(tabuleiro *mesa);
int val_diag_dir(tabuleiro *mesa);
int val_hrzt (tabuleiro *mesa);
int val_vrtc(tabuleiro *mesa);

int val_vlh(tabuleiro *mesa);

int val_fim(tabuleiro *mesa);
// -----------------------------------*

// entrada
// -----------------------------------*

char def_turno(char turno_ant);
void jogada (int marcacao, tabuleiro *mesa, char turno);

// impressão
// -----------------------------------*
void imprime_gr(char p_grade[3][3]);
void imprime_m(char p_grade [5][5]);
void show_mesa_p (tabuleiro *mesa, char p_grade[5][5]);
// -----------------------------------*
#endif