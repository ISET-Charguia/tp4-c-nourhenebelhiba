/*
 ============================================================================
 Name        : ex2tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, n,a;

	int tp[10], tn[10];

		printf("la taille du tableau ");
    scanf("%d", &n );


	j = 0;
	k = 0;
	for (i = 0; i <= 9; i++)
	{ printf("saisir lenombre",i+1);

		scanf("%d", &a);
		if (a>=0){

		tp[j] = a;
		j++;

	} else {

		tn[k] = a;
		k++;
	}
	} printf ("les entiers positifs sont: ");
	 for (i=0;i<j;i++){
	 printf("\n positis:%d\t ",tp[i]);

	}printf ("\n les entiers negatifs sont: ");
	for (i=0;i<k;i++)
		{  printf("\n negatifs:%d\t ",tn[i]);}
	return 0;
	}
