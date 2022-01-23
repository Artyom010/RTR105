#include <stdio.h>
#include <math.h>


int main(void){
	float a,b,p, intg1=0, intg2=0, intg3=0;
	printf("Ludzu ievadiet a un b vertibas:\n");
	scanf("%f \n", &a);
	scanf("%f", &b);
	printf("Ludzu ievadiet precizitati(obligati para skaitlis):\n");
	scanf("%f", &p);
	printf("a= %f \nb= %f \nprecizitate= %f\n", a,b,p);
	float w=(b-a)/p;
	printf("w= %f \n", w);
	for(int i=1; i<p;i++){
		intg1=intg1+(w*cos(a+w*i));
	}
	printf("Pec taisnstura metodes intg= %f\n", intg1);
	
	for(int i=1; i<p;i++){
		intg2=intg2+(w*((cos(a+w*i)+cos(a+w*(i-1)))/2));
	}
	printf("Pec trapecu metodes intg= %f\n", intg2);
	
	float x0, x1, x2;
	for(int i=1; i<p;i=i+2){
		x0=a+w*i;
		x1=a+w*(i-1);
		x2=a+w*(i+1);
		intg3=intg3+(w/3)*(cos(x0)+4*cos(x1)+cos(x2));
	}
	printf("Pec Simpsona metodes intg= %f\n", intg3);
	
	
	return 0;

}
