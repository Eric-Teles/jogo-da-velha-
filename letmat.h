
#ifndef letmat.h 
   #define letmat.h

typedef struct  coodenada
{
   int x;
   int y;
}ponto;


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
int val_diag_esq(tabuleiro mesa);
int val_diag_dir(tabuleiro mesa);
int val_hrzt (tabuleiro mesa);
int val_vrtc(tabuleiro mesa);

int val_vlh(tabuleiro mesa);

int val_fim(tabuleiro mesa);
// -----------------------------------*

// entrada
// -----------------------------------*

char def_turno(char turno_ant);
void jogada (int marcacao, tabuleiro mesa, char turno); 

// -----------------------------------*
#endif