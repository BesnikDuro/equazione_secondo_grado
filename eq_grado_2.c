#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c;
double x1,x2,d;

void coefficienti() 
{
   printf("coefficiente a:\t");
   scanf("%f", &a);
   printf("\ncoefficiente b:\t");
   scanf("%f", &b);
   printf("\ncoefficiente c:\t");
   scanf("%f", &c);
}

void determinante()
{
   d=b*b-4*a*c;
}

void soluzioni()
{ 
   if(d<0)
      printf("\nnon possono esserci soluzioni reali");
   else if(d==0) {
      x1=(-b)/(2*a);
      printf("Due soluzioni reali coincidenti x1 e x2 uguali a %5.3lf ",x1);
  }
   else
   {
      x1=(-b-sqrt(d))/(2*a);
      x2=(-b+sqrt(d))/(2*a);
      printf("Due soluzioni reali distinte x1= %5.3lf e x2= %5.3lf ",x1,x2);
   }

}

void equazione_primo()
{
    if((b==0)&&(c==0))
	printf("\nequazione indeterminata");
    else if(b==0)
	printf("\nequazione impossibile");
    else {
	x1=-c/b;
	printf("\n x= %5.3f", x1);
	 }
}

main()
{
   coefficienti();
   if(a==0) 
       equazione_primo();
   else {
        determinante();
        soluzioni();
    }
system("pause");	
}

