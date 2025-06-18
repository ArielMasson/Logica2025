#include <stdio.h>

int rafael(int x, int y) {
    x = 9 * x * x;
    y = y * y;
    return x + y;
}

int beto(int x, int y) {
    x = 2 * (x * x);
    y = 25 * (y * y);
    return x + y;
}

int carlos(int x, int y) {
    x = -100 * x;
    y = y * y * y;
    return y + x;
}

char* maior(int a, int b, int c) {
    if (a > b && a > c) {
        return "Rafael ganhou";
    } else if (b > c && b > a) {
        return "Beto ganhou";
    } else {
        return "Carlos ganhou";
    }
}

int main() {
    int vez, x, y;
    scanf("%d", &vez);

    for (int i = 0; i < vez; i++) {
        scanf("%d %d", &x, &y);

        int r = rafael(x, y);
        int b = beto(x, y);
        int c = carlos(x, y);

        printf("%s\n", maior(r, b, c));
    }

    return 0;
}
