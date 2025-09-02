#include <stdio.h>
#include <stdlib.h>
int main(){
	int revenu;
	int scor;
	int dur;
	printf("veuillez entrez votre revenu annuel en euros:");
	scanf("%d",&revenu);
	printf("veuillez entrez votre scor du credit:");
	scanf("%d",&scor);
	printf("veuillez entrez la duré du pret:");
	scanf("%d",&dur);
	if(revenu<=30000 && scor>=700 && dur<=10){
	
	printf("eligible");
}
	else if(revenu>=30000&&scor>=650&& dur<=15){
	printf("éligible avec condition");
}
	else{
		printf("non eligible");
	}
	


	return 0;
}