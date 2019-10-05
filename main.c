#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main()
{
    Fila* f = criar_fila(10);

    inserir(f, 2);
    inserir(f, 4);
    inserir(f, 12);
    inserir(f, 15);


    while(tamanho(f) > 0){
        printf("remover: %d\n", remover(f));
    }

    return 0;
}
