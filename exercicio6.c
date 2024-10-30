#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t1 = 0, t2 = 1, proximo;

    printf("Os 20 primeiros termos da serie de fibonacci:\n");

    for (int i = 1; i <= 20; i++) {
        printf("%d ", t1);
       proximo = t1 + t2;  
        t1 = t2;
        t2 = proximo;
    }

    printf("\n");

    return 0;
}
