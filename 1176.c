#include <stdio.h>

int main()
{
    int T, N, j;
    long long int fibonacci[61];

    fibonacci[0] = 0;
    fibonacci[1] = 1;
     
    for(j = 2; j <= 60; j++) {
        fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2]; 
    }
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, fibonacci[N]);
    }   
}
