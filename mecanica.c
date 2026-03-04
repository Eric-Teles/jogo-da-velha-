#include "mecanica.h"





void mesa_limpa (char grade[3][3]){
    char pont = 49; // '1'
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            grade[i][j] = pont;
            pont++;
        }
    }
}


void partida ( tabuleiro *mesa, char quadro[5][5]){
   char turno = 'o';
   int check = 0;
   char lance;
   char repasse;
   mesa->rodada ++;
   do{   
         printf("\t\t\tRODADA [ %d ]\n\n", mesa->rodada);
         show_mesa_p(mesa, quadro);
         printf("\n\t\t\tselecione uma célula:\n\t\t\t\t\t");
         scanf(" %c", &lance);

      printf("\nLance registrado: %c // %d:: como vai para o if ( %d )", lance, lance, (((int)(lance))-49));

         while (lance<'1' && lance >'9')  scanf(" %c", &lance);
         repasse = ((int)(lance))-49; // já na forma do índice que irei usar
         if (mesa->grade[coordenada[repasse].x][coordenada[repasse].y] != 'x' && mesa->grade[coordenada[repasse].x][coordenada[repasse].y] != 'o'){
            
            printf("\n #+#mesa-> grade [x,y]: %c\n",mesa->grade[coordenada[(((int)(lance))-49)].x][coordenada[(((int)(lance))-49)].y]);
               turno = def_turno(turno);
               jogada(repasse,mesa,turno);

            printf("\n #=# pos jogada :: mesa-> grade [x,y]:%c\nCoodenada {%d, %d}",mesa->grade[coordenada[(((int)(lance))-49)].x][coordenada[(((int)(lance))-49)].y], coordenada[(((int)(lance))-49)].x,coordenada[(((int)(lance))-49)].y );
               system("pause");
               check = val_fim(mesa);
               system("cls");
              
               printf("\n");

         } else{

               system("cls");
               printf ("Campo já preenchido! Tente novamente:");
               Sleep(2000);         
               system("cls");
               turno = def_turno(turno);
               // verificar o que fazer: a parte gráfica deveria apontar o erro   e contiuar mosrtrando a mesa. 
               // poderia mostrar o aviso e printar novamente a mesa...  
            }

      }while (check == 0); 


      if (check  == 1){
         system("cls");
         printf("\n\n               VITÓRIA\nVencedor: %d", turno);
         system("pause");
      }else if (check == 2){
         system ("cls");
         printf("\n\n               DEU VÉIA \n             :(");
         system("pause");

      }else {
         system("cls");
         printf ("\nERRO :: problema no retorno de validação de turno ou na função de partida.\n");
      }
   
}


   void teleprompt(char* string, int a){

      for (int i = 0; i<a ; i++){
         printf("%c", string[i]);
         Sleep(10);
      }
      printf("\n");
}

   void apresenta(){

      char msg1 [34] = {"Bem vindo ao jogo da VÉA . . .\n"};
      char msg2 [113] ={"Aqui temos duas modalidades de jogo: 1v1 e 1v máquina.\nambas operam em turnos onde o x começa, por padrão.\n"};
      char msg3 [111] = {"\nO tabulerio apresentará os números das céluas a serem marcadas. Escolha aquela que desejar, em seu turno."};
      
         system("cls");
         teleprompt(msg1,34);
         teleprompt(msg2,113);
         teleprompt(msg3,111);
         Sleep(1000);
         system("cls");
   }

void sair (){
      char msg[32] = {"Adeus, adeus\nEu vou me embora!"};
      system("cls");
      for (int i=0; i<32; i++){
         printf("%c", msg[i]);
         Sleep(100);
      }
}

