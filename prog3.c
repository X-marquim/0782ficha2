#include <stdio.h>

int main() {
    int escolha;
    double num;

    printf("1 - Euro - USA Dollar.\n");
    printf("2 - USD Dollar - Euro.\n");
    printf("3 - Euro - CAD.\n");
    printf("4 - CAD - Euro.\n");
    printf("Escolha um opcao: ");
    scanf("%d", &escolha);


    switch (escolha)
    {
    case 1: // Conversao de euros para usa dollars
        printf("\n\nInsira o valor: ");
        scanf("%lf", &num);
        printf("\n\n");
        printf("%lf Euros sao %lf USA Dollars", num, num * 0.95);
        break;
    case 2: // Conversao de usa dollars para euros
        printf("\n\nInsira o valor: ");
        scanf("%lf", &num);
        printf("\n\n");
        printf("%lf USA Dollars sao %lf Euros", num, num / 0.95);
        break;
    case 3: // Conversao de euros para cad
        printf("\n\nInsira o valor: ");
        scanf("%lf", &num);
        printf("\n\n");
        printf("%lf Euros sao %lf CAD", num, num / 0.69);
        break;
    case 4: // Conversao de cad para euros
        printf("\n\nInsira o valor: ");
        scanf("%lf", &num);
        printf("\n\n");
        printf("%lf CAD sao %lf Euros", num, num * 0.69);
        break;    
    default:
        printf("Opcao invalida, Obrigado!");
        break;
    }
    
    
    return 0;
}