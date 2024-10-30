#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 int main() {
    for(int i = 1; i <= 100; i++){
        int resto = i % 2;
        if(resto == 0) {
            printf("%d\n", i);
        }
    }
}

