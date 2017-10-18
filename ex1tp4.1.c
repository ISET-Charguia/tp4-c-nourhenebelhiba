/*
 ============================================================================
 Name        : ex1tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()

{int t[100];
    float moy;
     int n,i,s;

      s=0;
      printf("la taille du tableau ");
       scanf("%d", &n );
    for (i=0; i<=n-1 ; i++)
    {
         printf("Donner l'entier %d: ", i+1);
         scanf ("%d", &t[i]);
         s=s+t[i];
    }
    moy= (float)s/n;
    printf("la moyenne est =%f", moy );

    return 0;
}
