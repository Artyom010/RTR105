#include <stdio.h>

int main()
{
    char a;
    int i;
    printf("Naturals skaitlis: ");
    scanf("%d", &a);
    
	for( i = 7; i >= 0; i-- ) {
    	printf( "%d", ( a >> i ) & 1);
	}
	

    printf("\n");
    return 0;
}
