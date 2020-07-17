#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	double rest=0;
	float x1=0,x2=0;
	puts("digite los valores de a,b,c: ");
	scanf("%lf %lf %lf", &a,&b,&c);
	if(a == 0){
		puts("ERROR no es una ecuacion de 1er grado");
	}
	else{
		rest = b*b-4*a*c;
		if(rest >0){
				x1 = (-b+sqrt(rest))/(2.0*a);
				x2 = (+b+sqrt(rest))/(2.0*a);
			printf("%.1f %.1f", x1,x2);
			}
	}
	return 0;
}

