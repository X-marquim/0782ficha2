#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira um numero: ");
    scanf("%d", &num1);

    printf("Insira outro numero: ");
    scanf("%d", &num2);

    printf("\nA soma dos dois numero e %d.\n", num1 + num2);

    if (num1 > num2) {
        printf("O valor do primeiro numero e maior.");
    } else if (num1 < num2) { 
        printf("O valor do segundo numero e maior.");
    } else {
        printf("Ambos os valores sao iguais.");
    }

    return 0;
}