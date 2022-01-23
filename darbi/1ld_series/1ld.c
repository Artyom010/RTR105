#include <stdio.h>
#include <math.h>
long double summ_cos (long double sk, int n){
	
	long double a;
	a=1;
	int k = 0;
	long double Sum=1;
	
	while(k < n){
		a = a*(((-1)*pow(sk,2))/((2*k+1)*(2*k+2)));
		Sum = Sum+a;	
		k++;	
	}
	return Sum;
}

int main(void){
	
	double x, y;
	printf("funkcijas definicijas apgabals ir visi realie skaitli\n");
	printf("X vertiba: ");
	scanf("%lf", &x);
	printf("\nCos(%.2lf) = %lf\n\n", x, cos(x));
	y = summ_cos(x, 500);
	long double a500 = summ_cos(x, 500)-summ_cos(x, 499);
	long double a499 = summ_cos(x, 499)-summ_cos(x, 498);
	printf("Aprekinata cos vertiba pec summas= %lf\n", y);
	printf("a499 = %Le\n", a499);
	printf("a500 = %Le\n\n\n", a500);
	
	printf("               500                      \n");
	printf("              _____                     \n");
	printf("              \\           k     2*k          \n");
	printf("               \\      (-1) * %.2lf            \n", x);
	printf(" cos(%.2lf) =   >   ________________    \n", x);
	printf("               /                \n");
	printf("              /____      (2*k)!                 \n");
	printf("               k=0                      \n\n\n");
	
	printf("                            2\n");
	printf("                       -%.2f  \n", x);
	printf(" rekurences reiz.: _______________\n");
	printf("\n");
	printf("                   (2*k+1)*(2*k+2)\n");
	
	return 0;

	
}

