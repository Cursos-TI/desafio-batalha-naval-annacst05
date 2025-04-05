#include <stdio.h>

int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
      //array de linha
      printf(" ");
      for (int i = 0; i < 10; i++)
      {
          printf(" %c", linha[i]);
      }
      printf("\n");
      
      //criando o tabuleiro 10x10
    int tabuleiro[10][10];
    printf(" ");
        for (int i = 0; i < 10; i++)
        { 
            for (int j = 0; j < 10; j++)
            {
               tabuleiro[i][j] = 0;
               
            }                
        }


        //navio diagonal principal
       for (int i = 1; i < 4; i++)
       {
            tabuleiro[i][i + 1] = 3;
       }
       

        //navio diagonal secundária
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[i][7 - i] = 3;
        }
        
        //exibindo o tabuleiro 
        for (int i = 0; i < 10; i++)
        {
            printf("%2d ", i + 1); //número de linhas
            for (int j = 0; j < 10; j++)
            {
                printf("%d ", tabuleiro[i][j]); //valor do tabuleiro
            }
            printf("\n");
        }
        
        return 0;
}
