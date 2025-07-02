#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int lista[10];
    
    scanf("%d", &N);
    
    for (int c = 0; c < 10; c++){
        lista[c] = N * pow(2, c);
        printf("N[%d] = %d\n", c, lista[c]);
    }

    return 0;
}
