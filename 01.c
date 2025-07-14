#include <stdio.h>
#include<stdlib.h>

void menu_exibir(int menu);
int escolher(int menu);

int main() {
    while (1)
    {
        int genero = escolher(1);
        int narrativa = escolher(20 + genero);
        int tema = escolher(300 + (genero*10) + narrativa);

        int codigo = (genero * 100) + (narrativa * 10) + tema;

        switch (codigo)
        {
        case 111:
            printf("Filme: Interestelar\n\n");
            break;
        case 112:
            printf("Filme: Guardiões de Galáxia\n");
            break;
        case 121:
            printf("Filme: A Origem\n\n");
            break;
        case 122:
            printf("Filme: Invocação do Mal\n");
            break;
        case 211:
            printf("Filme: O Resgate do Soldado Ryan\n\n");
            break;
        case 212:
            printf("Filme: Os Miseráveis\n");
            break;
        case 221:
            printf("Filme: À Procura da Feliciadade\n\n");
            break;
        case 222:
            printf("Filme: Extraordinário\n");
            break;
        default:
            break;
        }

        int opcao = escolher(4);

        if (opcao != 1) {
            printf("Finalizando programa\n");
            break;
        }
        
    }

    return 0;
    
}

void menu_exibir(int menu) {
    switch (menu)
    {
    case 1:
        printf("Escolha um genero: \n");
        printf("1- Ficção\n");
        printf("2- Realista\n");
        printf("Escolha: ");
        break;
    
    case 21:
        printf("Escolha um tipo de narratico: \n");
        printf("1- Aventura\n");
        printf("2- Suspense\n");
        printf("Escolha: ");
        break;

    case 22:
        printf("Escolha um tipo de narratico: \n");
        printf("1- Historia\n");
        printf("2- Coridiano\n");
        printf("Escolha: ");
        break;

    case 311:
        printf("Escolha um tema principal: \n");
        printf("1- Futuro\n");
        printf("2- Espaço\n");
        printf("Escolha: ");
        break;
    
    case 312:
        printf("Escolha um tema principal: \n");
        printf("1- Psicologico\n");
        printf("2- Fantasmas\n");
        printf("Escolha: ");
        break;

    case 321:
        printf("Escolha um tema principal: \n");
        printf("1- Guerra\n");
        printf("2- Revolução\n");
        printf("Escolha: ");
        break;
    
    case 322:
        printf("Escolha um tema principal: \n");
        printf("1- Drana\n");
        printf("2- Familia\n");
        printf("Escolha: ");
        break;  

    case 4:
        printf("Deseja receber outra recomendação: \n");
        printf("1- Sim\n");
        printf("2- Não\n");

        break;
    default:
        break;
    }
}

int escolher(int menu) {
    for (int i = 0; i < 3; i++) {
        menu_exibir(menu);

        int escolha;
        scanf("%d", &escolha);
        printf("\n");

        if (escolha == 1 || escolha == 2) {
            return escolha;
        } else if (i + 1 >= 3) {
            printf("Erro: Escolha errada muitas vezes, programa sera encerrado\n");
            exit(0);
        } else {
            printf("Escolha uma opção valida\n\n");
        }
    }

    return 0;
}