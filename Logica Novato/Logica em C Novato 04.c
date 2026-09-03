#include <stdio.h>
/*Comparação de Idade*/

int main() {
    int idade1 = 20;
    int idade2 = 30;

    if (idade1 > idade2) {
        printf ("Idade 1 é maior que Idade 2\n");
    }
    else if (idade1 < idade2) {
        printf ("Idade 2 é maior que Idade 1\n");
    }
    else if (idade1 == idade2) {
        printf ("As idades são iguais\n");
    }

return 0;


}