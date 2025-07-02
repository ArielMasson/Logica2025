#include <stdio.h>

int main() {
    int N, cont = 1;
    
    scanf("%d", &N);
  
    for (N; N > 1 ; N--) {
        cont*= N;
    }
    
    printf("%d\n", cont);
    
    return 0;
}
