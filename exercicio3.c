#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    for(int i = 1 ; i <= 500 ; i++) {

        if (i % 5 == 0)
            printf("%d ", i);
    }
    return 0;
}