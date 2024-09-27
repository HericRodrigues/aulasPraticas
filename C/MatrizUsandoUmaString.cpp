#include <stdio.h>
#include <string.h>

void ImprimeVet(int Vet[3])
{
    int i;
    for(i = 0; i < 3; i++) {
    printf("%d ", Vet[i]);
    }
}

int main()
{
    char Texto[2][17];

    int i;

    strcpy(Texto[0], "Aula de Programacao");  // esta string não cabe na linhada matriz
                                             
    strcpy(Texto[1], "em linguagem C."); 

    for(i = 0; i < 2; i++) {
        printf("%s\n", Texto[i]);
    }
    return 0;
}
