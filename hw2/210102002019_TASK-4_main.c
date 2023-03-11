/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */
#include <stdio.h>

int func1(int);

int main()
{
	int number;

	printf("Type a number : ");

	if (!(scanf("%d",&number)))
	    printf("\nSomething went wrong !");

	else
		printf("\nFactorial of %d = %d",number,func1(number));

	return 0;
}
