#include <stdio.h>
#include <string.h>

int main() {
    
    char risada[51];
    char vogais[51];
    int engracada = 1;
    int v = 0;
        
    fgets(risada, 51, stdin);
    for(int i = 0; risada[i] != '\0'; i++) {
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
        vogais[v++] = risada[i];
        }
            
    }
        
    
    for(int i = 0; i < v / 2; i++) {
        if (vogais[i] != vogais[v - 1 - i]) {
            engracada = 0;
            break;
        }
    }
    if(engracada ==1){
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}
