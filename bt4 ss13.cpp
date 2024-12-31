#include<stdio.h>
#include<string.h>
int main(){
	char duci[]=" i will come to Thai to meet Bright";
	char ch ;
	int dem=0;
	printf(" moi ban chon ky tu can tim ");
	scanf("%c",&ch );
	for( int i =0 ; i< strlen(duci ) ; i++ ){
		if ( duci[i]==ch){
			dem++;
		}
	}
	printf (" ki tu %c xuat hien %d ", ch , dem );
	return 0;
}