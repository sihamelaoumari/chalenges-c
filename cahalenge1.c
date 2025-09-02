#include<stdio.h>
#include <stdlib.h>
int main(){
	float tempC;
	float tempK;
	printf("la tepérature en cesluis");
	scanf("%.2f",&tempC);
	tempK=tempC+273.15;
	printf("%.2f",tempK);
	return 0;
}