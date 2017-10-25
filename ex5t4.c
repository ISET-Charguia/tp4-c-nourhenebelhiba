/*
 ============================================================================
 Name        : ex5t4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t[100],n,x,i,y,min,pos, choix;

		do{
			printf("donner un entier");
			scanf("%d",&n);
		}while(n<=0 || n>=100);
		for(i=0;i<=n-1;i++)
		{
			printf ("donner t[i]");
		    scanf("%d",&t[i]);
		}
		do{
			printf("donner un choix");
			scanf("%d",&choix);

		switch(choix)
		       {
		        case 1 :(min=t[0]);
		           for(i=1;i<=n;i++){
			         if(t[i]<min)
			         {
				       min=t[i];
		               printf("le min=%d",min);
			         }
		                             }
		                break;
		case 2 :
			printf("donner les elements que vous vouler remplacer");
		scanf("%d",&y);
		i=0;
		      while(i<n){
			if(t[i]==y)
			i++;
		          }
		    break;
		case 3 :pos=x;
			do{
			printf("donner position");
		    scanf("%d",&x);
		          }
		    while(pos<0||pos>n);
		for(i=n;i<=pos;i--)
			{
			t[i]=t[i-1];
		    printf("donner l'element a inverse:");
		    scanf("%d",&x);
		    t[pos]=x;
			}
		for(i=0;i<=n;i++)
		{
			printf("%d\t",t[i]);
		}
				break;

		case 4 :for(i=0;i<n;i++)
				{
			      printf("%d\t",t[i]);
				}break;
      default: printf("erreur");
				}
		}while(choix<='1'||choix>='4');
		return 0;}

