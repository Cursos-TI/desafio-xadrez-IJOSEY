#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentacaobispo(int numero){
     if (numero > 0)
     {
         movimentacaobispo( numero - 1); 
         printf("Direita, cima.\n");
        
     }
     
}
/*void movimentaçãotorre(int numero){
    // if (numero > 0)
     {
         printf("Direita, cima.\n");
         movimentaçãotorre( numero - 1);
     }
     
}*/
/*void movimentaçãorainha(int numero){
     if (numero > 0)
     {
         printf("Direita, cima.\n");
         movimentaçãorainha( numero - 1);
     }
     
}*/



int main() {
  /*  // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int mbispo,mtorre,mrainha; 
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
         printf("Digite quantas casas deseja mover o na diagonal bispo:\n");
         scanf("%d",&mbispo);
         for (int i = 0; i < mbispo; i++)
         {
            printf("%d direita,cima\n",i);
         }
         
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
         printf("Digite quantas casas deseja mover para direita a torre:\n");
         scanf("%d",&mtorre);
         for (int i = 0; i < mtorre; i++)
         {
            printf("%d direita\n",i);
         }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
         printf("Digite por quantas casas deseja mover para esquerda a rainha:\n");
         scanf("%d",&mrainha);
         for (int i = 0; i < mrainha; i++)
         {
            printf("%d esquerda\n",i);
         }
    // Nível Aventureiro - Movimentação do Cavalo
         printf("Movimentação do cavalo em L.(sendo 3 casas horizontal 1 casa vertical)\n");
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //loophorizontal!
         for(int i = 0; i < 1; i++)
         {
          for (int j = 0; j < 3; j++)
          {
               printf("1 casa Horizontal.\n");
          }
               printf("1 casa vertical.\n");
         }*/
  
      int casasbispo,casastorre,casasrainha;
    // Nível Mestre - Funções Recursivas e Loops Aninhados

    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
       casasbispo = 5;
       printf("Movimento do bispo!\n");
       movimentacaobispo(casasbispo);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
