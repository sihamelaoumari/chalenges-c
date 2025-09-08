#include <stdio.h>



int main(){
int taille=5;
int t[]={2, 6, 4, 7, 5};
int j , i, s;
printf("avant le trie:\n");
for(i=0;i<taille;i++){
	printf("%d\n",t[i]);
	
}
for(i=0;i<taille-1;i++){
	for (j=0;j<taille-i-1;j++){
	if(t[j]>t[j+1]){
		s=t[j];
		t[j]=t[j+1];
	t[j+1]=s;
	}
}
}
printf("apres le trie:\n");
for(i=0;i<taille;i++){
	printf( "%d\n",t[i]);
	
}
return 0;
	
	
	
}