#include <stdio.h>

int main () {
    double numeroPreciso = 4.00000000;
    long double numeroMuitoPreciso = 5.0000000000000000000000000000;

    printf ("Numero preciso (double): %.15f\n", numeroPreciso);
    printf ("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;

}