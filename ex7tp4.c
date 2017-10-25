/*
 ============================================================================
 Name        : ex7tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	const int a=20;
	const int b=20;
	int t[a][b],i,j,l,c,s;
	float moy;


	do{
		printf("donnez le ligne l  :");
		scanf("%d",&l);
		printf("donnez la colone c :");
	    scanf("%d",&c);
	}while((l>20)||(c>20));

	s=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("donnez un entier");
			scanf("%d",&t[i][j]);
			s=s+t[i][j];
		}
	}

	for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				printf("%d2",t[i][j]);
			}
			printf("\n");
}
	moy=(float)s/(i*j);
printf("somme=%d",s)	;
printf("moy=%.3f",moy);
}
