#include <stdio.h>
#include <math.h>
float atvas1(float z, float dz){
	return((cos(z+dz)-cos(z))/dz);
}
float atvas2(float y, float dy){
	return((atvas1(y+dy,dy)-atvas1(y,dy))/dy);
}

int main(void){
	float a,b,dx,x;
	printf("Ludzu ievadiet a un b vertibas:\n");
	scanf("%f \n", &a);
	scanf("%f", &b);
	printf("Ludzu ievadiet DeltaX:\n");
	scanf("%f", &dx);
	printf("a= %f \nb= %f \nDeltaX= %f\n", a,b,dx);
	x=a;
	while(x<=b){
		
		printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, cos(x), (-1)*sin(x), atvas1(x, dx), (-1)*cos(x), atvas2(x, dx));
		
		FILE * fderivative = fopen("derivative.dat", "a");
		
		fprintf(fderivative, "%lf %lf %lf %lf %lf %lf\n", x, cos(x), (-1)*sin(x), atvas1(x, dx), (-1)*cos(x), atvas2(x, dx));
	
		fclose(fderivative);
		
		x =x+dx;
	}
	return 0;

}
