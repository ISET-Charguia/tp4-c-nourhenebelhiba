/*
 ============================================================================
 Name        : ex4tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int t1[10]={10,20,5,8,102,56,84,59,23,24};
	int t2[10]={52,65,87,15,2,9,36,12,46,97};
	int i,aux;

	for(i=0;i<10;i++)
	{
       aux=t1[i];
       t1[i]=t2[i];
       t2[i]=aux;
	}
    printf("\n T1 est ");
    for(i=0;i<10;i++)
	{
	    printf("\n %d",t1[i]);
	}
    printf("\n T2 est ");
    for(i=0;i<10;i++)
	{
	    printf("\n %d",t2[i]);
	}
	return 0;
}
