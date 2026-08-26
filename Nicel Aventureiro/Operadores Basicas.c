#include <stdio.h>

int main () {
/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf ("Digite o primeiro número: ");
scanf ("%d", &numero1);
printf ("Digite o segundo número: ");
scanf ("%d", &numero2);


//operação soma
soma = numero1 + numero2;
//operação subtração
subtracao = numero1 - numero2;
//operação multiplicação
multiplicacao = numero1 * numero2;
//operação divisão
divisao = numero1 / numero2;

printf("soma: %d\n", soma);
printf("subtração: %d\n", subtracao);
printf("multiplicação: %d\n", multiplicacao);
printf("divisão: %d\n", divisao);

return 0;


}