#ifndef MECANICA_H
   #define MECANICA_H
   #include "letmat.h"
   #include <windows.h>
   #include <stdio.h>

   void mesa_limpa(char grade[3][3]);
  


   void partida ( tabuleiro *mesa, char quadro[5][5]);

   void teleprompt(char* string, int a);
   void apresenta();
   void sair ();

#endif



