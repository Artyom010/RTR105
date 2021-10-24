#include <stdio.h>

int main()
{
    char ch1,ch2,ch3, ch4;
    int seciba;
    printf("Ievadiet 3 burtus: ");
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    printf("Augosaa seciibaa-0 \nDilstosaa seciibaa-1 \n");
    scanf("%d",&seciba);
    if(ch2>=ch1){
    	ch4=ch1;
    	ch1=ch2;
    	ch2=ch4;
	}
	if(ch3>=ch1){
		ch4=ch1;
		ch1=ch3;
		ch3=ch4;
	}
	if(ch3>=ch2){
		ch4=ch2;
		ch2=ch3;
		ch3=ch4;
	}

	
	if(seciba){
    	printf( "%c %c %c",ch1, ch2, ch3);
	}
	else {
		printf( "%c %c %c",ch3, ch2, ch1);

	}

    
	
	

    printf("\n");
    return 0;
}
