/******************************************************************************

Crie um programa imprime na tela os valores de 1 a 100 (incluindo o 1 e o 100).

*******************************************************************************/
#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
    }
    return 1;
}


int main() {
    int soma = 0;

    printf("Números primos entre 0 e 200:\n");

    for (int i = 0; i <= 200; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            soma += i; 
        }
    }

    printf("\nA soma dos números primos entre 0 e 200 é: %d\n", soma);


    return 0; 
}
