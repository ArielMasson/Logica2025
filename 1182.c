#include <stdio.h>

int main() {
    double M[12][12];
    int L;
    double soma=0,  media = 0, elem;
    char T;
    
    scanf("%d", &L);
    scanf(" %c", &T);
    
    for(int i=0; i < 12; i++) {
        for(int j=0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }   
    }
    
    for(int j=0; j < 12; j++) {
        soma += M[j][L];
    }
    
    media = soma / 12; 
   
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", media);
    }
    
    return 0;
}
