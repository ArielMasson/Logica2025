#include <stdio.h>

int main() {
    double M[12][12];
    int L;
    double soma=0,  media = 0;
    char O;
    
    scanf(" %c", &O);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
            if(i + j < 11) {
                soma += M[i][j];
            }
        }   
    }
    
    media = soma / 66; 
    
    if (O == 'S') {
        printf("%.1lf\n", soma);
    } else if (O == 'M') {
        printf("%.1lf\n", media);
    }

    return 0;
}
