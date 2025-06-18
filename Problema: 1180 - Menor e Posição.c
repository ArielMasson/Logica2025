#include <stdio.h>

int main()
{
    int N, menor, pos = 0, i;
    
    scanf("%d", &N);
    
    int X[N];
    
    for (i = 0; i < N; i++){
        scanf("%d", &X[i]);
        if (i == 0) {
            menor = X[i];
        } else if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    return 0;
}
