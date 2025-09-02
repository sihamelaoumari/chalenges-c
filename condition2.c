#include <stdio.h>
#include <stdlib.h>
int main(){
	int A, B;
	float somme, soustraction, multiplication, devision;
printf(" veuillez entrez un nombre reel A:");
scanf("%d",&A);
printf(" veuillez entrez un nombre reel B:");
scanf("%d",&B);
somme= A+B;
soustraction=A-B;
multiplication=A*B;
devision=A/B;
printf("la somme de A et B est:%.2f\n",somme);
printf("la soustraction du A et B est:%.2f\n",soustraction);
printf("la multiplication de A et B est:%.2f\n",multiplication);
printf("la devision  de A et B est:%.2f\n",devision);

	return 0;
}
