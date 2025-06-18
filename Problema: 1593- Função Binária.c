#include <stdio.h>

int main() {
    int T;
    long long int I;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%lld", &I);
        int cont = 0;
        
        while (I > 0) {
            if (I % 2 == 1) {
                cont++;
            }
            I = I / 2;
        }
        
        printf("%d\n", cont);
    }
    
    return 0;
}
