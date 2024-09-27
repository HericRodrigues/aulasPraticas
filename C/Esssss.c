#include <stdio.h>
#include <locale.h>

main void(main){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite o valor um 1: ");
    scanf("%d",&num1);
    printf("Digite o valor um 2: ");
    scanf("%d",&num2);
    printf("Digite o valor um 3: ");
    scanf("%d",&num3);

    if((num1 != num2)&&(num2 != num3))printf("valor invalido!");
    

}
