/*
 ============================================================================
 Name        : tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	const int a=20;
	const int b=20;
	const int c=40;
	int t1[a],t2[b],t3[c] ,n1,n2,i,x,y;
	do{
	printf("donnez le 1er entier");
	scanf ("%d",&n1);
	printf("donnez le 2eme entier");
		scanf ("%d",&n2);
	}while (!((n1>0 && n1<=20)&&(n2>0 && n2<=20)));
	for (i=0;i<n1-1;i++)
	{
		printf("donner un entier");
		scanf ("%d",&t1[i]);
	}
	printf("\n");

for (i=0;i<n2-1;i++)
{
	printf("donner un entier");
	scanf ("%d",&t2[i]);
}
 x=0;y=0;
 for(i=0;i<n1+n2;i++){
	 if((t1[x]<t2[y])&&(x<n1)&&(y<n2)){
		 t3[i]=t1[x];
		 x++;
	 }else if((t1[x]>t2[y])&&(x<n1)&&(y<n2))
	 {
		 t3[i]=t2[y];
		 y++;
	 }else if((x<n1)&&(y==n2)){
		 t3[i]=t1[x];
		 x++;
	 }else{
		 t3[i]=t2[y];
		 y++;
	 }
	 printf("t3[%d]=%d",i,t3[i]);
 }

}

