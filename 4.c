#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho da matriz:");
    scanf("%d", &n);
    n--;

    int matriz[n][n];

    for (int i =0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\n\nSua matriz:\n\n");
    
    for (int i =0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}