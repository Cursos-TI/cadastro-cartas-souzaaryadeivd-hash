#include <stdio.h>

/*Verificação de em percentual Operador(%) retorna o resto, verificação de numero par
ou impar*/

int main () {

    int numero = 15800, resultado;

    resultado = numero % 2;

    printf ("O resto da divisão de %d por 2 é: %d\n", numero, resultado);
    if (resultado == 0) {
        printf ("O numero é par\n");
    }
    else {
        printf ("O numero é impar\n");
    }

return 0;
}