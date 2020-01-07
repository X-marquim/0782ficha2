#include <stdio.h>

int main() {
    int escolha;
    double num1;

    printf("-----Selecionar opcao-----\n");
    printf("Quilogramas para libras(1)\n");
    printf("Libras para quilogramas(2)\n");
    printf("Escolha um: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Inserir a quantidade de quilogramas: ");
        scanf("%lf", &num1);
        printf("\n\n%lf quilosgramas sao %lf em libras", num1, num1 * 2.2046);
        break;
    case 2:
        printf("Inserir a quantidade de libras: ");
        scanf("%lf", &num1);
        printf("\n\n%lf libras sao %lf em quilogramas", num1, num1 / 2.2046);
        break;
    default:
        printf("Erro...\n Reniciando programa");
        main();
        break;
    }

    return 0;
}