#include <stdio.h>
 
int main() {
    int cd1, cd2, qnt1, qnt2;
    float pre1, pre2;
    
    scanf("%d %d %f\n %d %d %f", &cd1, &qnt1, &pre1, &cd2, &qnt2, &pre2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (qnt1*pre1)+(qnt2*pre2));
    
    return 0;
}
