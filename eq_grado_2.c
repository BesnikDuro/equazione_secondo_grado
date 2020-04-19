/*
	Zgjidhja e nje ekuazioni te grades se dyte i formes: ax2 + bx + c = 0,
	duke kontrolluar situata te ndryshme te vlerave te coficientave.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta;
	float x, x1, x2;
	printf("\n\n");

	printf("\tinserisci il primo coficiente a: ");
	scanf("%f", &a);
	printf("\tinserisci il secondo coficiente b: ");
	scanf("%f", &b);
	
	if ( c != 0 ) {
		printf("\tinserisci il terzo coficiente c: ");
		scanf("%f", &c);
		}	

	if( a != 0)
		{
		if( c == 0 )
			{
			c = 0;
			(x*x + b*x) == 0;
			x1 = 0;
			x2 = -( b/a);
			printf("\tSoluzioni sono 2: x1 = %f e x2 = %f\n", x1, x2);
			}
	
		else
			if(b == 0){
				x1 = -c/a;
				printf("\tx1 e uguale a x2 =%f\n", x1);	
			}
		
			delta = (b * b - 4 * a * c);
			if (delta <=0)
				printf("\tdelta e' = %f \tnon ci sono radici \n", delta);	
		else
			if (delta != 0){
				x1 = -(b + sqrt(b * b - 4 * a * c)) / (2 * a);
				x2 = -(b - sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("\til risultato e’ x1 = %f, x2 = %f\n\n\n", x1, x2);
			}
			
		}
return 0;
}
