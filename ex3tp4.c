/*
 ============================================================================
 Name        : ex3tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int t[30];
	int i,k,n;
	i=0;
	k=0;
	printf("Saisie un entier");
	scanf("%d",&n);
    do
    {
      t[i]=n%2;
      n=n/2;
      i++;
      k++;
    } while (n!=0);
    printf("\nla conversion en binaire est: ");
    for(i=k-1;i>=0;i--)
    {
      printf("%d",t[i]);
    }

	return 0;
}
