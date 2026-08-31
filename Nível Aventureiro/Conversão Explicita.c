#include <stdio.h>

int main() {
    int a = 1;
    int b = 3;
    float quociente = (float) a / b;
    float multiplicacao = (float) a * b;
    
    /* 'a' é explicitamente convertido para float antes da operação*/

printf("Quociente: %.2f\n", quociente);
printf("Multiplicação: %.2f\n", multiplicacao);

    return 0;
}