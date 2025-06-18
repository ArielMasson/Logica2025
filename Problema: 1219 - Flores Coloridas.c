#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    int l1, l2, l3;
    double Atri, Avioleta, Arosa, Agirassol, semip, Rrosa;
    
    while (scanf("%d %d %d", &l1, &l2, &l3) != EOF) {
        
        semip = (l1 + l2 + l3) / 2.0;
        Atri = sqrt(semip * (semip - l1) * (semip - l2) * (semip - l3));
        
        Rrosa = Atri / semip;
        Arosa = PI * (Rrosa * Rrosa);
        
        Avioleta = Atri - Arosa;
        
        Agirassol = (PI * pow((l1 * l2 * l3) / (4.0 * Atri), 2)) - Atri;
        
        printf("%.4lf %.4lf %.4lf\n", Agirassol, Avioleta, Arosa);
    }
    
    return 0;
}
