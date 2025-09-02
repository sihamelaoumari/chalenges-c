#include <stdio.h>
#include <stdlib.h>
int main(){
	int temperature;
	printf("la temperature en celsuis:");
	scanf("%d",&temperature);
	if(temperature<0){
		printf("solide");
	}
	if(temperature>=0||temperature<100){
	
	printf("liquide");
	}
	else{
	
		printf("gaz");
	}
	




	return 0;
}