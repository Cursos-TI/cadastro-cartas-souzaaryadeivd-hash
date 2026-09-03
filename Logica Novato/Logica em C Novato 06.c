#include <stdio.h>

/*Verificação de Estoque*/

int main () {
    int estoque = 100;

    if (estoque <= 50) {
        printf ("Estoque a baixo do ideal\n");
    }

    else if (estoque <=100){
        printf ("Estoque dentro do ideal\n");
    }

    else if (estoque > 100) {
        printf ("Estoque acima do ideal\n");
    }

    return 0;

}