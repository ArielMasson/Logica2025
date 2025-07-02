#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a;
    float b;
    char c;
    char d[51];

    scanf("%d %f %c ", &a, &b, &c);
    fgets(d, sizeof(d), stdin);

    d[strcspn(d, "\n")] = '\0';

    printf("%d%.6f%c%s\n", a, b, c, d);
    printf("%d\t%.6f\t%c\t%s\n", a, b, c, d);
    printf("%10d%10.6f%10c%10s\n", a, b, c, d);

    return 0;
}
