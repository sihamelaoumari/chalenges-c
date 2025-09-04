#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char tablnom[100][20], heuteur[100][20];
	float  prix[100];
	int  nmbrlvr[100].;
	int totalLvr=0;
	int choix ,i;
	printf("Système de Gestion de Stock dans une Librairie:");
    do{

	ptintf("2: ajouter un livre 5: mettre a jour la quantite 3: supprimer un livre 4:afficher tout les livre 1: aficher le nombre total en stock: 7: sortir: 6: rechercher un livre. ");
	scanf("%d",&choix);
	 switch(choix){
	 	case 1:
	 	printf("entrez la quantite a stocké.");
	 	printf("entrez la quantite:");
	    scanf("%d",&nmbrlvr);
	    break;
	 	case 2:
	    printf("vous choisir d'ajouter un livre.");
	    printf("entrez le nom du livre:");
	    printf("entrez le nom du livre:");
        scanf("%s",tablnom[totalLvr]);
	    printf("entrez le nom de l'heuteur:");
	    scanf("%s",heuteur[totalLvr]);
	    printf("entrez le prix:");
	    scanf("%d",prix[totalLvr]);
	    totalLvr++

        break;
	    case 3:
	printf(" vous choisir de supprimer un livre");
		if(nmbrLvr==0){
		printf(" il se trouve aucune livre ");
		else{
			
		}
	}
	break;
		case 4:

	printf("vous choisi d'afficher les livres:");
    if(nbLivres == 0){
    printf("Premièrement,ajoutez des livres!\n");
    } else {
        printf("Liste des livres:\n");
        for (i=0;i<nbLivres;i++) {    
    printf("nom du livre:%s \n",tablLnom[i]);
    printf("heuteur:%s\n",heuteur[i]);
    printf("prix en euros:%.2f\n",prix[i]);
    printf("quantite:%d\n",stock[i].quantite);
        }
    }
    break;
	break;
	    case 5:
	printf("mettre a jour la quantite:");
	if(nmbrLvr==0){
		printf("vous avez besoin d'etrez premierment la quantite a stocke.);
	}
	else{
		char recherche;
		printf("entrer le titre du livres :");
		scanf("%s",&tablnom);
		
	}
	break:
		case 6:
			printf("vous avez choisisez de rechercher un livre:");
			if()
	case 7:
		printf(" sortir");
		break;
	default:
		printf("veuillez ressayez d'entrez un nombre de 1 a 6");
		
}
	 }
	 while(choix!=7)
	
}