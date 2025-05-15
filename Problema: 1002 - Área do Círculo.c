#include <stdio.h>
 
int main() {
    double n, raio;
    n = 3.14159;
    
    scanf("%lf", &raio);
    double res = (raio*raio) * n;
    
    printf("A=%.4lf\n", res);
 
    return 0;
}
