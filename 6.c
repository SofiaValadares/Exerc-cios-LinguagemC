#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[200];

    printf("Digite a primeira string (s1): ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 

    printf("Digite a segunda string (s2): ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; 


    printf("\nComprimento de s1: %d", strlen(s1));
    printf("\nComprimento de s2: %d", strlen(s2));


    int comparacao = strcmp(s1, s2);
    printf("\n\nComparação entre s1 e s2: ");
    if (comparacao == 0) {
        printf("As strings são IGUAIS.\n");
    } else if (comparacao < 0) {
        printf("s1 é MENOR que s2.\n");
    } else {
        printf("s1 é MAIOR que s2.\n");
    }


    strcpy(s3, s1);     
    strcat(s3, s2);     
    printf("\n\ns3 (s1 + s2): %s\n", s3);

   
    strcpy(s1, s2);
    printf("\n\nApós copiar s2 para s1, s1 agora é: %s", s1);

    s3[0] = '\0';  
    printf("\nApós limpar s3, s3 agora é: \"%s\" (string vazia)\n", s3);

    return 0;
}
