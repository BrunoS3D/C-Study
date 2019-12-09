#include <stdio.h>

int main(void) {
    // em c arrays são endereços de memória
    // nesse exemplo supomos que slots aponte para o endereço 100
    // você poderá acessar os endereços entre 100 e 109
    // esses endereços totalizam o total de 10 indices
    // int* array = malloc(10 * sizeof(int));
    int slots[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int a = 15;
    int b = 30;

    int id;
    // acesso de valores fora do tamanho da array na memoria
    // ao executar perceba que o numero 30 foi printado
    // isso significa que o ponteiro que continha o endereço de memoria com o valor do numero 30 foi lido
    for (id = 0; id < 12; id++) {
        printf("%d, ", (&a)[id]);
    }

    return 0;
}