#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char str[5];
    
    printf("ecrire un text:");
    scanf("%s", str);
    int counteur = 0;
    while (str[counteur] != '\0'){
        counteur++;
    }

    printf("%d",counteur-1);

	
	


return 0;
}