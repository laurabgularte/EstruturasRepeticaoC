#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int numero;
    int contadorNumeros = 0;

    printf("Digite varios numeros\n");

    while (1) {
        scanf("%d", &numero); 
        if (numero == 0) {
            break;
        }
        if (numero >= 100 && numero <= 200) {
            contadorNumeros++;
        }
    }

    printf("Quantidade de numeros entre 100 e 200: %d\n", contadorNumeros);
  return 0;
}
