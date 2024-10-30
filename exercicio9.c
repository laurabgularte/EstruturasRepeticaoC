#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int idade, opiniao;
    int somaExcelente = 0;
    int contadorExcelente = 0, contadorRegular = 0, contadorBom = 0;
    int i = 0;
    int totalEspectadores = 20;


    do {

        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe a opinião (3 - excelente, 2 - bom, 1 - regular): ");
        scanf("%d", &opiniao);

   
        if (opiniao == 3) {
            somaExcelente += idade;
            contadorExcelente++;
        } else if (opiniao == 1) {
            contadorRegular++;
        } else if (opiniao == 2) {
            contadorBom++;
        }
        i++;
    } while (i < totalEspectadores);

  
   float media_idade_excelente;
if (contadorExcelente != 0) {
    media_idade_excelente = (float)somaExcelente / contadorExcelente;
} else {
    media_idade_excelente = 0;
}

    float percent_bom = (float)contadorBom / totalEspectadores * 100;

    printf("Média das idades das pessoas que responderam excelente: %.2f\n", media_idade_excelente);
    printf("Quantidade de pessoas que responderam regular: %d\n", contadorRegular);
    printf("Percentual de pessoas que responderam bom: %.2f%%\n", percent_bom);

    return 0;
}

