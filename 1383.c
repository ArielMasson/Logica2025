#include <stdio.h>

int main() {
    int n;
    int sudoku[9][9];

    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {
        int solucao_valida = 1;

        for (int linha = 0; linha < 9; linha++) {
            for (int coluna = 0; coluna < 9; coluna++) {
                scanf("%d", &sudoku[linha][coluna]);
            }
        }

        for (int linha = 0; linha < 9 && solucao_valida == 1; linha++) {
            int usado[10] = {0};
            for (int coluna = 0; coluna < 9; coluna++) {
                int numero = sudoku[linha][coluna];
                if (numero < 1 || numero > 9 || usado[numero] == 1) {
                    solucao_valida = 0;
                    break;
                }
                usado[numero] = 1;
            }
        }

        for (int coluna = 0; coluna < 9 && solucao_valida == 1; coluna++) {
            int usado[10] = {0};
            for (int linha = 0; linha < 9; linha++) {
                int numero = sudoku[linha][coluna];
                if (numero < 1 || numero > 9 || usado[numero] == 1) {
                    solucao_valida = 0;
                    break;
                }
                usado[numero] = 1;
            }
        }

        for (int bloco_linha = 0; bloco_linha < 9 && solucao_valida == 1; bloco_linha += 3) {
            for (int bloco_coluna = 0; bloco_coluna < 9 && solucao_valida == 1; bloco_coluna += 3) {
                int usado[10] = {0};
                for (int i = 0; i < 3 && solucao_valida == 1; i++) {
                    for (int j = 0; j < 3 && solucao_valida == 1; j++) {
                        int numero = sudoku[bloco_linha + i][bloco_coluna + j];
                        if (numero < 1 || numero > 9 || usado[numero] == 1) {
                            solucao_valida = 0;
                            break;
                        }
                        usado[numero] = 1;
                    }
                }
            }
        }

        printf("Instancia %d\n", instancia);
        if (solucao_valida == 1) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
