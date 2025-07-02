#include <stdio.h>

int main() {
    int N, cont;
    float t1, t2, t3, media;
    
    scanf("%d\n", &N);
    
    for (cont=1; cont<=N; cont++) {
        scanf("%f %f %f", &t1, &t2, &t3);
        media = ((t1*2) + (t2*3) + (t3*5)) / 10;
        
        printf("%.1f\n", media);
    }
    
    return 0;
}
