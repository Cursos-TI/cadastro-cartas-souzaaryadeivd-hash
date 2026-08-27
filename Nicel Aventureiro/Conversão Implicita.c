#include <stdio.h>

int main() {
    int a = 50;
    float b = 3.5;
    float resultado = a + b;

    /* 'a' é convertido implicitamente para float antes
    da operação de adição, e o resultado é armazenado em 'resultado' */

    printf ("Resultado da soma: %.2f\n", resultado);

    return 0;
        

}