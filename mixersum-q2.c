/*
 ============================================================================
 Name        : mixersum-q2.c
 Author      : LIJIN DANIEL JOSEPH
 Version     :
 Copyright   : Your copyright notice
 Description : program for sum of integer and float value in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1;
	float n2,sum;
	printf("ENTER AN INTEGER NUMBER:");
	scanf("%d",&n1);
	printf("ENTER A FLOATING POINT NUMBER:");
	scanf("%f",&n2);
	sum=n1+n2;
	printf("THE SUM OF THE NUMBERS IS %f",sum);
	return EXIT_SUCCESS;
}
