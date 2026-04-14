#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    int menu;

    do
    {
        // Logo abaixo está o menu básico utilizando a estrutura switch.

        printf("\nEscolha qual peça você quer mover digitando o número equivalente a peça...\n");
        printf("\n1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair\n");
        printf("---> ");
        scanf("%i", &menu);

        switch (menu)
        {
        case 1:
            for (int bispo = 1; bispo <= 5; bispo++)
            {
                printf("Cima, Direita\n"); // Essa mensagem será exibida 5 vezes.
            }
            break;
        case 2:
            int torre = 1; // Variável para ser usada no loop abaixo.
            while (torre <= 5)
            {
                printf("Direita\n"); // Essa mensagem será exibida 5 vezes.
                torre++;
            }
            break;
        case 3:
            int rainha = 1; // Variável para ser usada no loop abaixo.
            do
            {
                printf("Esquerda\n"); // Essa mensagem será exibida 8 vezes.
                rainha++;
            } while (rainha <= 8);
            break;
        case 4:
            int movimentoDoCavalo = 1; // Variável que para ser usado no loop abaixo.
            while (movimentoDoCavalo--)
            { // O loop vai executar apenas uma vez, já que após execução ele será decrementado, tornando a varável em um booleano false.
                for (int i = 1; i <= 2; i++)
                {
                    printf("Baixo\n"); // Essa mensagem será exibida 2 vezes.
                }
                printf("Esquerda\n"); // Essa mensagem será exibida 1 vezes.
            }
            break;
        case 5:
            printf("Saindo...\n"); // Essa mensagem será exibida logo antes do loop ser finalizado.
            break;
        default:
            printf("\nOpção inválida!\n"); // Essa mensagem será exibida caso o número digitado no input seja diferente dos números mencionados no menu.
            break;
        }

    } while (menu != 5);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
