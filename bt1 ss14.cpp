#include<stdio.h>
#include<string.h>
int main (){
	char duci[100] ;
	printf ("nhap chuoi muon them ");
	fgets( duci ,sizeof(duci) , stdin );
	
	printf("chuoi vua nhap la : %s",duci );
	int length = strlen(duci);
	printf("%d", length );
	return 0;
	
	
}