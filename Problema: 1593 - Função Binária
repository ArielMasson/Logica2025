#include <stdio.h>

int main() {
    int T;
    long long int I, temp;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%lld", &I);
        temp = I;  
        int cont = 0;
        
        while (temp > 0) {
            cont += temp & 1;  
            temp >>= 1;        
        }
        
        printf("%d\n", cont);
    }
    
    return 0;
}
