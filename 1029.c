#include <stdio.h>

int calls;
int num_calls(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        calls += 2;
        return num_calls(n - 1) + num_calls(n - 2);
    }
}

int main()
{
    int N, X;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &X);
        calls = 0;
        int result = num_calls(X);
        printf("fib(%d) = %d calls = %d\n", X, calls, result);
    }
    
    return 0;
}
