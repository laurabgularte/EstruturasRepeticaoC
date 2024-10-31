#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int multiplicando, multiplicador, produto;

  
    printf("Digite o multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);

   
    if (multiplicando > 0 && multiplicador > multiplicando) {
        produto = multiplicando * multiplicador;

        printf("O produto de %d e %d eh: %d\n", multiplicando, multiplicador, produto);
    } else {
        printf("Os números devem ser positivos e o multiplicando deve ser menor que o multiplicador.\n");
    }

    return 0;
}
