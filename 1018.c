#include <stdio.h>

int main() {
    int N, c100, c50, c20, c10, c5, c2, c1;

    scanf("%d", &N);
    printf("%d\n", N);

    if (N > 0 && N < 1000000) {
        c100 = N / 100;
        N = N % 100;

        c50 = N / 50;
        N = N % 50;

        c20 = N / 20;
        N = N % 20;

        c10 = N / 10;
        N = N % 10;

        c5 = N / 5;
        N = N % 5;

        c2 = N / 2;
        N = N % 2;

        c1 = N;
    }

    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);

    return 0;
}
