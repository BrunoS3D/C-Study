// standard input output
// Algo como "using System;"
#include <stdio.h>

int main(void) {
    int age;

    // printa no console a pergunta
    printf("Qual eh a sua idade? ");
    // cria um "input" para que o usuario possa inserir dados
    // "&age" = endereço na memória em que o scanf irá escrever o input do usuário
    scanf("%d", &age);

    // printa o resultado
    printf("Voce tem %d anos de idade", age);
    getchar();

    return 0;
}