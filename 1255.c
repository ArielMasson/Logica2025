#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int N;
    char str[201];
    int contador[26]; 
    
    scanf("%d", &N);
    getchar(); 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 26; j++) {
            contador[j] = 0;
        }

        fgets(str, 201, stdin);

        for (int j = 0; str[j] != '\0'; j++) {
            char letra = tolower(str[j]);
            contador[letra - 'a']++;
        }

        int max = 0;
        for (int j = 0; j < 26; j++) {
            if (contador[j] > max) {
                max = contador[j];
            }
        }

        for (int j = 0; j < 26; j++) {
            if (contador[j] == max) {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
