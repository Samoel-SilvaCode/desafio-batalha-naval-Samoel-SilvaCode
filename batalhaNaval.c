#include <stdio.h>



int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

   int tabuleiro[10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    
   };

    // navio horizontal

    int navioHorizontal[3] ={3,3,3};

    //  navio vertical

    int navioVertical[3] ={3,3,3};

    // navio horizontal

    tabuleiro[0][4] =  navioHorizontal[0];
    tabuleiro[0][5] = navioHorizontal [1] ;
    tabuleiro[0][6] = navioHorizontal [2];

     //  navio vertical

    tabuleiro[7][1] = navioVertical[0];
    tabuleiro[8][1] = navioVertical[1];
    tabuleiro[9][1] = navioVertical[2];


    // lógica que percorre o tabuleiro e faz o print das localizações

   for ( int i = 0; i < 10; i++)
   {for ( int j = 0; j < 10; j++){
    printf("%d  ", tabuleiro[i][j]);
    }
   printf("\n"); }
   
    return 0;
}
