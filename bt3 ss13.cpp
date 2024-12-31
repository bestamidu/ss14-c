#include<stdio.h>
#include<string.h>
int main (){
	char duci[]= " i want to go to Chiang Mai ";
	int leng= strlen(duci);
	for ( int i = leng-1 ; i >=0 ; i--){
		 printf("%c", duci[i]);
	}
       printf("\n");	

	return 0;
}