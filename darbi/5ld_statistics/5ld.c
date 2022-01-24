#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int dilst(void const *a, void const *b ){
return (*(char*)a - *(char*)b );
}
int videj(char s[], int l){
	
	
	int i, sum = 0;
    for (i=1; i < l; i++){
    	sum += s[i];
	}
	sum=sum/(l-1);
	return (sum/1);
}
int median(char s[], int l){
	if((l%2) == 0) return (l/2);
	else return (((l/2)+(l/2+1))/(2));
}
void moda(char s[], int l){
	int number = s[0];
	int mode = number;
	int count = 1;
	int countMode = 1;

for (int i=1; i<l; i++)
{
      if (s[i] == number) 
      { 
         ++count;
      }
      else
      { 
            if (count > countMode) 
            {
                  countMode = count; 
                  mode = number;
            }
           count = 1; 
           number = s[i];
  }
}

printf("'%c' (%d reizes)\n", mode, countMode);
}
int main()
{
    char s[100];
    printf("Ievadiet simbolu rindu: \n");
    fgets(s, sizeof(s), stdin);
    //puts(s);
    int l = strlen(s);
    qsort(s, l, sizeof(char), dilst);
    //puts(s);
    printf("Minimala vertiba: '%c' (%i)\n", s[1], s[1]);
    printf("Maksimala vertiba: '%c' (%i)\n", s[l-1], s[l-1]);
    printf("Videja vertiba: '%c' (%i)\n", videj(s,l), videj(s,l));
    printf("Medianas vertiba: '%c' (%i)\n", s[median(s,l)], median(s,l));
    printf("Modas vertiba:");
    moda(s,l);
    printf("Sakartotu simbolu rina:");
    puts(s);
    printf("Atbilstosi ASCII skaitli: \n");
    for (int i = 1; i < l; i++) printf("{%d}, ", s[i]);
    
	return 0;
}




