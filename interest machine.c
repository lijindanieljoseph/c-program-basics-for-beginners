/*
 ============================================================================
 Name        : interest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,s;
	printf("Enter the principal amount(P):");
	scanf("%d",&p);
	printf("Enter the inteest rate(R):");
	scanf("%f",&r);
	printf("Enter the number of years(n):");
    scanf("%f",&n);
    s=(p*r*n)/100;
    printf("Simple interest of the amount is %f",s);
	return EXIT_SUCCESS;
}
