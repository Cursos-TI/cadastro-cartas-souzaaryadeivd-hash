#include <stdio.h>

/* Atribuição Simples (=);
Atribuição com Soma (+=);
Atribuição com Subtração (-=);
Atribuição com Multiplicação (*=);
Atribuição com Divisão (/=);
*/


int main() {

int numero1, numero2, resultado;

resultado = 2;
printf("Resultado: %d\n", resultado);
resultado += 5;
printf ("Resultado: %d\n", resultado);


resultado = 10;
printf ("Resultado: %d\n", resultado);
resultado -= 5;
printf ("Resultado: %d\n",resultado);


resultado = 50;
printf ("Resultado: %d\n", resultado);
resultado *= 5;
printf ("Resultado: %d\n", resultado);


resultado = 100;
printf ("Resultado: %d\n", resultado);
resultado /= 5;
printf ("Resultado: %d\n", resultado);

    
    resultado = 500;


    printf ("O resultado é: %d\n", resultado);
        resultado +=10;
    printf ("O resultado é: %d\n", resultado);
        resultado -=20;
    printf ("O resultado é: %d\n", resultado);
        resultado *=5;
    printf ("O resultado é: %d\n", resultado);
        resultado /=5;

   return 0;

}