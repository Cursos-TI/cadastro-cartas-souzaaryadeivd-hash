#include <stdio.h>

int main() {
    
    int matemática, portugues, historia;
    float media;

    printf ("Matemática: \n");
        scanf ("%d", &matemática);

    
    printf ("Potugues: \n");
        scanf ("%d", &portugues);

    
    printf ("Histoira: \n");
        scanf ("%d", &historia);


    media = (matemática + portugues + historia) / 3;

    printf ("A média é: %.2f", media);


return 0;



}