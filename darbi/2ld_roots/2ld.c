#include <stdio.h>
#include <math.h>


int main(void){
	float a,b,c,p, x;
	int k=0;
	printf("Ludzu ievadiet a,b un c vertibas:\n");
	scanf("%f \n", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	printf("Ludzu ievadiet precizitati:\n");
	scanf("%f", &p);
	printf("a= %f \nb= %f \nc= %f\nprecizitate= %f\n", a,b,c,p);
	
	while((b-a)>p){
		k++;
		x=(a+b)/2;
		if(cos(a)*(cos(x)-c)>0) a=x;
		else b=x;
		printf("%d iteracija: cos(%lf) = %lf\t", k, a, cos(a));
		printf("cos(%lf) = %lf\t", x, cos(x));
		printf("cos(%lf) = %lf\n", b, sinh(b));
	}
	printf("Sakne atrodas pie x=%lf, jo cos(x) ir %lf \n", x, cos(x));
	return 0;

}
