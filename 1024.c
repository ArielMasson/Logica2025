#include <stdio.h>
#include <string.h>

int main() {
    int N, i;
    char texto[1001];
    
    scanf("%d", &N);
    getchar();  

    for (i = 0; i < N; i++) {
        fgets(texto, 1001, stdin);

        texto[strcspn(texto, "\n")] = '\0';

        int tam = strlen(texto);
        char passada1[1001];
        char invertida[1001];
        char final[1001];
        int j;

        for (j = 0; j < tam; j++) {
            if ((texto[j] >= 'a' && texto[j] <= 'z') || (texto[j] >= 'A' && texto[j] <= 'Z')) {
                passada1[j] = texto[j] + 3;
            } else {
                passada1[j] = texto[j];
            }
        }
        passada1[tam] = '\0';

        for (j = 0; j < tam; j++) {
            invertida[j] = passada1[tam - 1 - j];
        }
        invertida[tam] = '\0';

        int meio = tam / 2;
        for (j = 0; j < meio; j++) {
            final[j] = invertida[j];
        }
        for (j = meio; j < tam; j++) {
            final[j] = invertida[j] - 1;
        }
        final[tam] = '\0';

        printf("%s\n", final);
    }

    return 0;
}
