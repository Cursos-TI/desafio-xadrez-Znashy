#include <stdio.h>

void bispo(int casas) // Função recursiva para o movimento do bispo.
{
    if (casas > 0) // Se a variável casas for maior que 0 executará o bloco de código abaixo.
    {
        for (int i = 5; i >= 1; i--) // Loop para movimento vertical do bispo, será executado 5 vezes.
        {
            printf("Cima\n");
            for (int i = 0; i < 1; i++) // Loop para movimento horizontal do bispo, será executado uma vez a cada iteração do loop externo.
            {
                printf("Direita\n");
            }
        }
        bispo(casas - 1); // Ponto principal para a recursividade, executa a função novamente porém sempre decrementando o valor da variável casas, assim evitando um loop infinito.
    }
}

void torre(int casas) // Função recursiva para o movimento da torre.
{
    if (casas > 0) // Se a variável casas for maior que 0 executará o bloco de código abaixo.
    {
        printf("Direita\n");
        torre(casas - 1); // Recursividade que executa a função novamente fazendo o decremento da variável casa.
    }
}

void rainha(int casas) // Função recursiva para o movimento da rainha.
{
    if (casas > 0) // Se a variável casas for maior que 0 executará o bloco de código abaixo.
    {
        printf("Esquerda\n");
        rainha(casas - 1); // Recursividade que executa a função novamente fazendo o decremento da variável casa.
    }
}

void cavalo(int casas) // Função recursiva para o movimento do cavalo.
{
    if (casas > 0) // Se a variável casas for maior que 0 executará o bloco de código abaixo.
    {
        for (int i = 0, j = 1; i < 2; i++, j--) // loops com variáveis multiplas onde i será icrementado até ser 2 e o j será decrementado até -1.
        {
            printf("Cima\n");
            if (j == 0) // Após o primeiro print o valor de j será zero e o if vai ser executado, ou seja, o código vai imprimir Cima 2 vezes e depois Direita uma vez.
            {
                printf("Direita\n");
            }
        }
        cavalo(casas - 1); // Recursividade que executa a função novamente fazendo o decremento da variável casa.
    }
}

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
            bispo(1); // Executa a função para movimento do bispo, passando o valor 1 para que a função recursiva seja executada apenas uma vez.
            break;
        case 2:
            torre(5); // Executa a função de movimento da torre, passando o valor 5.
            break;
        case 3:
            rainha(8); // Executa a função de movimento da rainha, passando o valor 8.
            break;
        case 4:
            cavalo(1); // Executa a função para movimento do cavalo, passando o valor 1 para que a função recursiva seja executada apenas uma vez.
            break;
        case 5:
            printf("Saindo...\n"); // Essa mensagem será exibida logo antes do loop ser finalizado.
            break;
        default:
            printf("\nOpção inválida!\n"); // Essa mensagem será exibida caso o número digitado no input seja diferente dos números mencionados no menu.
            break;
        }

    } while (menu != 5);

    return 0;
}