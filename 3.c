#include <stdio.h>

void multiplicarMatrizes(int lA, int cA, int cB, int A[lA][cA], int B[cA][cB], int C[lA][cB]) {
    for (int i = 0; i < lA; i++) {
        for (int j = 0; j < cB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int lA, cA;

    printf("\nLinhas e colunas da matriz A (separador por espaço)\n");
    scanf("%d %d", &lA, &cA);
    int A[lA][cA];

    for (int i = 0; i < lA; i++) {
        printf("\nOs %d numero da matriz A na linha %d\n", cA, i+1);
        for (int j = 0; j < cA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int lB, cB;

    printf("\nLinhas e colunas da matriz B (separador por espaço)\n");
    scanf("%d %d", &lB, &cB);
    int B[lB][cB];

    for (int i = 0; i < lB; i++) {
        printf("\nOs %d numero da matriz B na linha %d\n", cB, i+1);
        for (int j = 0; j < cB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if (cA != lB) {
        printf("Erro: as matrizes nao podem ser multiplicadas.\n");
        return 1;
    }

    int C[lA][cB];
    multiplicarMatrizes(lA, cA, cB, A, B, C);

    printf("\nMatrix resultado\n");
    imprimirMatriz(lA, cB, C);

    return 0;
}
