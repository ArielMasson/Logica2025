#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int instancia = 1; instancia <= n; instancia++) {
        vector<vector<int>> sudoku(9, vector<int>(9));
        bool solucao_valida = true;

        for (int linha = 0; linha < 9; linha++) {
            for (int coluna = 0; coluna < 9; coluna++) {
                cin >> sudoku[linha][coluna];
            }
        }

        for (int linha = 0; linha < 9 && solucao_valida; linha++) {
            vector<bool> usado(10, false);
            for (int coluna = 0; coluna < 9; coluna++) {
                int numero = sudoku[linha][coluna];
                if (numero < 1 || numero > 9 || usado[numero]) {
                    solucao_valida = false;
                    break;
                }
                usado[numero] = true;
            }
        }

        for (int coluna = 0; coluna < 9 && solucao_valida; coluna++) {
            vector<bool> usado(10, false);
            for (int linha = 0; linha < 9; linha++) {
                int numero = sudoku[linha][coluna];
                if (numero < 1 || numero > 9 || usado[numero]) {
                    solucao_valida = false;
                    break;
                }
                usado[numero] = true;
            }
        }

        for (int bloco_linha = 0; bloco_linha < 9 && solucao_valida; bloco_linha += 3) {
            for (int bloco_coluna = 0; bloco_coluna < 9 && solucao_valida; bloco_coluna += 3) {
                vector<bool> usado(10, false);
                for (int i = 0; i < 3 && solucao_valida; i++) {
                    for (int j = 0; j < 3 && solucao_valida; j++) {
                        int numero = sudoku[bloco_linha + i][bloco_coluna + j];
                        if (numero < 1 || numero > 9 || usado[numero]) {
                            solucao_valida = false;
                            break;
                        }
                        usado[numero] = true;
                    }
                }
            }
        }

        cout << "Instancia " << instancia << '\n';
        if (solucao_valida) {
            cout << "SIM\n\n";
        } else {
            cout << "NAO\n\n";
        }
    }

    return 0;
}
