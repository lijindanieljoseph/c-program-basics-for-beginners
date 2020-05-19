/*
 ============================================================================
 Name        : student.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float w,l,a,g;
	printf("Score of WRITTEN TEST:");
	scanf("%f",&w);
	printf("Score of LAB EXAMS:");
	scanf("%f",&l);
	printf("Score of ASSIGNMENT:");
	scanf("%f",&a);
	g=(w*70)/100+(l*20)/100+(a*10)/100;
	printf("Using weighted average the GRADE of the student is %f",g);
	return EXIT_SUCCESS;
}
