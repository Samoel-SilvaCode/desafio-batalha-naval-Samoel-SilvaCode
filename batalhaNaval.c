#include <stdio.h>
#include <stdlib.h>

// Definição do tamanho do tabuleiro

#define LINHA  10
#define COLUNA  10

// Definição do tamanho das habilidades
#define TAM_HAB_L 3
#define TAM_HAB_C 5



int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    
    //  definição do tabuleiro

   int tabuleiro[LINHA][COLUNA] = {
    {0}
    
   };

    // Definição centro das habilidades
    int centroL = TAM_HAB_L / 2;  // 3/2 = 1
    int centroC = TAM_HAB_C / 2;  // 5/2 = 2

// Definição de variaveis // habilidade


    int cone [TAM_HAB_L][TAM_HAB_C];
    int cruz [TAM_HAB_L][TAM_HAB_C];
    int octaedro[TAM_HAB_L][TAM_HAB_C];

   


// Definição do funcionamento das habilidades


for (int i = 0; i < TAM_HAB_L; i++)
    {for (int j = 0; j < TAM_HAB_C; j++)
        {
            // habilidade cone

             if (j >= (centroC - i) && j <= (centroC + i))
            cone[i][j] = 1;
        else
            cone[i][j] = 0;


    
       
        // HABILIDADE CRUZ

        if (i == centroL || j == centroC)
            cruz[i][j] = 1;
        else
            cruz[i][j] = 0;

        
        // HABILIDADE OCTAEDRO 
        
        if (abs(i - centroL) + abs(j - centroC) <= centroL)
            octaedro[i][j] = 1;
        else
            octaedro[i][j] = 0;
        
         }
    }

    


// Definição de variaveis // coordenadas de inserção dos navios e habilidades

      int origemConeL = 8;
      int origemConeC = 7;

      int origemCruzL = 2;
      int origemCruzC = 6;

      int origemOctL = 1;
      int origemOctC = 1;


   int linhaH = 0;
   int colunaH = 4;
   int linhaV = 6;
   int colunaV = 2;
   int tamanho = 3;
   int linhaD1 = 5;
   int colunaD1 = 6;
   int linhaD2 = 4;
   int colunaD2 = 4;
   

// VERIFICAÇÃO HORIZONTAL

printf("Posicionando navio HORIZONTAL...\n");

if (colunaH + tamanho <= COLUNA) {
    // Se viavel for 1 posso adicionar o barco, se for 0 não pode
    int viavel = 1; 

    // Verifica se todas as posições estão livres
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0) {  
            viavel = 0; // Tem um item na posição
            break;
        }
    }
    
    if (viavel) {
        // Aloca o navio
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
        }
        printf("✓ Navio adicionado na posição [%d][%d] a [%d][%d]\n", 
               linhaH, colunaH, linhaH, colunaH + tamanho - 1);
    } else {
        printf("✗ ERRO: Posição ocupada\n");
    }
    
} else {
    printf("✗ ERRO: Tentando adicionar navio fora do tabuleiro\n");
}


// VERIFICAÇÃO VERTICAL

printf("Posicionando navio VERTICAL...\n");

if (linhaV + tamanho <= LINHA) {
    // Se viavel for 1 posso adicionar o barco, se for 0 não pode
    int viavel = 1;

    // Verifica se todas as posições estão livres
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {  
            viavel = 0;
            break;
        }
    }
    
    
    if (viavel) {
        // Aloca o navio
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linhaV + i][colunaV] = 3;  
        }
        printf("✓ Navio adicionado na posição [%d][%d] a [%d][%d]\n", 
               linhaV, colunaV, linhaV + tamanho - 1, colunaV);
    } else {
        printf("✗ ERRO: Posição ocupada\n");
    }
    
} else {
    printf("✗ ERRO: Tentando adicionar navio fora do tabuleiro\n");
}


// VERIFICAÇÃO DIAGONAL


    printf("Posicionando o primeiro navio diagonal\n");


if (linhaD1 + tamanho <= LINHA && colunaD1 + tamanho <=COLUNA)
{
    int viavel = 1;

    for (int i = 0; i < tamanho; i++)
    {
        if (tabuleiro[linhaD1 + i] [colunaD1 + i] !=0)
        {
            viavel = 0;
            break;
        }
        
    }
    if (viavel)
    {
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro [linhaD1 + i][colunaD1 + i] = 3;
        }
         printf("Primeiro navio daigonal posicionado em (%d,%d) a (%d,%d)\n", 
                   linhaD1, colunaD1, linhaD1 + tamanho -1,colunaD1 + tamanho - 1 );
        
    }else{printf("✗ ERRO: Posição ocupada\n");
    
    }

} else {
    printf("✗ ERRO: Tentando adicionar navio fora do tabuleiro\n");
}

  printf("Posicionando o segundo navio vertical\n");


if (linhaD2 + tamanho <= LINHA && colunaD2 + tamanho <=COLUNA)
{
    int viavel = 1;

    for (int i = 0; i < tamanho; i++)
    {
        if (tabuleiro[linhaD2 + i] [colunaD1 + 2] !=0)
        {
            viavel = 0;
            break;
        }
        
    }
    if (viavel)
    {
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro [linhaD2 + i][colunaD2 + i] = 3;
        }
         printf("Primeiro navio diagonal posicionado em (%d,%d) a (%d,%d)\n", 
                   linhaD2, colunaD2, linhaD2 + tamanho -1 , colunaD2 + tamanho -1);
        
    }else{("✗ ERRO: Posição ocupada\n");
    
    }

} else {
    printf("✗ ERRO: Tentando adicionar navio fora do tabuleiro\n");
}

 //  Habilidade Cone

if (1)  //  if externo apenas para criar o escopo
{
    int viavel = 1;   

   
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = 0; j < TAM_HAB_C; j++) {

            if (cone[i][j] == 1) {

                int linhaTab = origemConeL - centroL + i;
                int colunaTab = origemConeC - centroC + j;

                if (linhaTab < 0 || linhaTab >= LINHA ||
                    colunaTab < 0 || colunaTab >= COLUNA) {

                    viavel = 0;
                    break;
                }
            }
        }
        if (!viavel) break;
    }

    // insere se ainda for viável
    if (viavel) {

        for (int i = 0; i < TAM_HAB_L; i++) {
            for (int j = 0; j < TAM_HAB_C; j++) {

                if (cone[i][j] == 1) {

                    int linhaTab = origemConeL - centroL + i;
                    int colunaTab = origemConeC - centroC + j;

                    if (tabuleiro[linhaTab][colunaTab] == 0)
                        tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }

        printf("✓ Habilidade inserida com sucesso!\n");

    } else {
        printf("✗ ERRO: Não há espaço suficiente\n");
    }
}



 //  Habilidade Cruz

if (1)  //  if externo apenas para criar o escopo
{
    int viavel = 1;   

   
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = 0; j < TAM_HAB_C; j++) {

            if (cruz[i][j] == 1) {

                int linhaTab = origemCruzL - centroL + i;
                int colunaTab = origemCruzC - centroC + j;

                if (linhaTab < 0 || linhaTab >= LINHA ||
                    colunaTab < 0 || colunaTab >= COLUNA) {

                    viavel = 0;
                    break;
                }
            }
        }
        if (!viavel) break;
    }

    // insere se ainda for viável
    if (viavel) {

        for (int i = 0; i < TAM_HAB_L; i++) {
            for (int j = 0; j < TAM_HAB_C; j++) {

                if (cruz[i][j] == 1) {

                    int linhaTab = origemCruzL - centroL + i;
                    int colunaTab = origemCruzC - centroC + j;

                    if (tabuleiro[linhaTab][colunaTab] == 0)
                        tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }

        printf("✓ Habilidade inserida com sucesso!\n");

    } else {
        printf("✗ ERRO: Não há espaço suficiente\n");
    }
}

 //  Habilidade Octaedro


if (1)  //  if externo apenas para criar o escopo
{
    int viavel = 1;   

   
    for (int i = 0; i < TAM_HAB_L; i++) {
        for (int j = 0; j < TAM_HAB_C; j++) {

            if (octaedro[i][j] == 1) {

                int linhaTab = origemOctL - centroL + i;
                int colunaTab = origemOctC - centroC + j;

                if (linhaTab < 0 || linhaTab >= LINHA ||
                    colunaTab < 0 || colunaTab >= COLUNA) {

                    viavel = 0;
                    break;
                }
            }
        }
        if (!viavel) break;
    }

    // insere se ainda for viável
    if (viavel) {

        for (int i = 0; i < TAM_HAB_L; i++) {
            for (int j = 0; j < TAM_HAB_C; j++) {

                if (octaedro[i][j] == 1) {

                    int linhaTab = origemOctL - centroL + i;
                    int colunaTab = origemOctC - centroC + j;

                    if (tabuleiro[linhaTab][colunaTab] == 0)
                        tabuleiro[linhaTab][colunaTab] = 5;
                }
            }
        }

        printf("✓ Habilidade inserida com sucesso!\n");

    } else {
        printf("✗ ERRO: Não há espaço suficiente\n");
    }
}




    // lógica que percorre o tabuleiro e faz o print das localizações

   for ( int i = 0; i < 10; i++)
   {for ( int j = 0; j < 10; j++){
   if (tabuleiro[i][j] == 0)
    printf("~ ");     // Água
    else if (tabuleiro[i][j] == 3)
    printf("N ");     // Navio
    else if (tabuleiro[i][j] == 5)
    printf("* ");     // Área da habilidade
   }
   printf("\n");
}

    return 0;
}
