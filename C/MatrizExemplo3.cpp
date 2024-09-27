#include <stdio.h>

void ImprimeVet(int Vet[10])
{
    int i;
    for(i = 0; i < 3; i++) {
    printf("%d ", Vet[i]);
    }
}

int main()
{
    int Matriz[2][3];

    int i;
    for(i = 0; i < 10; i++)
    {
        Matriz[0][i] = i;  // a matriz tem 3 colunas, mas o laço do for vai até 10
    }

    for(i = 0; i < 2; i++) {
        ImprimeVet(Matriz[i]);
    printf("\n");
    }
    return 0;
}
