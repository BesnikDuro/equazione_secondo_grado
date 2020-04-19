#include <stdio.h>
#include <math.h>

/*risolve un'equazione di secondo grado di forma a x2 + b x + c = 0
  controllando se esistono le soluzioni*/

int main(void)
{
    float a, b, c, delta;

    printf("Dammi i coefficienti dell'equazione\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    /*calcolo il delta*/
    delta = b*b -(4*a*c);
    if (delta < 0 )
        printf("l'equazione non ammette soluzioni reali\n");
    else{
        printf("prima soluzione %f\n", (-b + sqrt(delta)) / (2*a));
        printf("seconda soluzione %f\n", (-b -  sqrt(delta)) / (2*a));
    }
}
