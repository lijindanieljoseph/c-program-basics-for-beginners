/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1,n2,n3,result;
	printf("ENTER THREE NUMBERS:"); /* prints !!!Hello World!!! */
	scanf("%f%f%f",&n1,&n2,&n3);
	result=(n1+n2+n3)/3;
	printf("THE AVERAGE OF THE NUMBERS IS %f",result);
	return EXIT_SUCCESS;
}
