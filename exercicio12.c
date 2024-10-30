#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
    long populacaoA = 5000000;
    long populacaoB = 7000000;
    float taxaNatalidadeA = 0.03;
    float taxaNatalidadeB = 0.02;
    int anos = 0; 

   
    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaNatalidadeA; 
        populacaoB += populacaoB * taxaNatalidadeB; 
        anos++; 
    }

    // Exibe o resultado
    printf("A vai ultrapassar a populacao de B em %d anos.\n", anos);

    return 0;
}
