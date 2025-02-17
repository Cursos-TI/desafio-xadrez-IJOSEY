#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
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
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
