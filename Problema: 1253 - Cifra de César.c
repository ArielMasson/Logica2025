#include <stdio.h>

int main()
{
    int N, des, j;
    char str[51], letra;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%s", str);
        scanf("%d", &des);
        
        for(j = 0; str[j] != '\0'; j++){
            letra = str[j] - des; 
            if(letra < 'A'){
                letra += 26;
            }
            str[j] = letra;
        }
        
        printf("%s\n", str);
    }
    
    return 0;
}
