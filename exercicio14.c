#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned long fatorial(int n) {
    unsigned long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    printf("Digite numeros inteiros:\n");

  
    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero < 1) {
            break; 
        }

       
        printf("Fatorial de %d eh: %lu\n", numero, fatorial(numero));
    }

    return 0;
}
