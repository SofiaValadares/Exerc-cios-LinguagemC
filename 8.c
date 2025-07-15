#include <stdio.h>

/*
    O que é uma struct na linguagem C?

    Na linguagem C, uma struct (ou estrutura) é um tipo de dado definido pelo programador
    que permite agrupar variáveis diferentes sob um mesmo nome. Cada variável dentro da
    struct é chamada de "membro" ou "campo", e esses membros podem ter tipos diferentes
    como int, float, char[], etc.

    Para que serve?

    A struct serve para representar um objeto ou entidade do mundo real com seus dados 
    organizados. Em vez de criar várias variáveis soltas, podemos colocar tudo junto
    de forma estruturada, o que torna o código mais claro, organizado e fácil de entender.

    Como é declarada?

    A struct é declarada usando a palavra-chave `struct`, seguida de um nome e do 
    bloco de definição contendo os campos da estrutura. Por exemplo:

        struct Pessoa {
            char nome[100];
            int idade;
            float altura;
        };

    Quando seu uso é indicado?

    Você deve usar uma struct sempre que precisar armazenar e manipular 
    múltiplos dados relacionados a um mesmo conceito ou entidade. 
    É útil em programas que lidam com cadastros, sistemas de controle, jogos, 
    ou qualquer outro contexto que envolva representação de objetos com múltiplas informações.

    Abaixo, estão as estruturas criadas para os cenários propostos.
*/

/*
    a) Struct para representar um aluno:
       - nome: uma string (array de caracteres) com o nome do aluno
       - matrícula: um número inteiro que identifica o aluno
       - média final: uma nota final em ponto flutuante (float)
*/
struct Aluno {
    char nome[100];
    int matricula;
    float mediaFinal;
};

/*
    b) Struct para representar um produto:
       - nome: uma string com o nome do produto
       - código: um número inteiro identificador do produto
       - preço: um valor em ponto flutuante representando o preço
*/
struct Produto {
    char nome[100];
    int codigo;
    float preco;
};

/*
    c) Struct para representar uma data:
       - dia: inteiro representando o dia
       - mês: inteiro representando o mês
       - ano: inteiro representando o ano
*/
struct Data {
    int dia;
    int mes;
    int ano;
};
