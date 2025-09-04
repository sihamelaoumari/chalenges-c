#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	char chaine[]="hjg";
	int i;
	int c = strlen(chaine)-1 ;
	
	for(i= c;i>=0;i--){
	printf("%c\n",chaine[i]);
	
	}
	return 0;
}