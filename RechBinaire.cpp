#include<stdlib.h>
#include<stdio.h>
int main(){
	int t[10];
	int i, inf, val, sup, med;
	for(i=1; i<=10; i++){
		printf("entrer les valeurs\t");
		scanf("%d",&t[i]);
	}
	
	printf("entrer la valeur recherchee\t");
	scanf("%d",&val);
	inf=1;
	sup=10;
	while(inf<sup){
		med=(inf+sup)/2;
		if(t[med]<val){
			inf=med+1;
		}
		else{
			sup=med;
		}
	}
	if(t[inf]==val){
		printf("element present");
	}
	else{
		printf("element absent");
	}
}