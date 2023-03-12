/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */
#include <stdio.h>

unsigned long long func1(int);

int main()
{
	int number;

	printf("Type a number : ");

	if (!(scanf("%d",&number)))
	    printf("\nSomething went wrong !");

	else
		printf("\nFactorial of %d = %lld",number,func1(number));

	return 0;
}

unsigned long long func1(int number)
{
    if (number == 0)
        return 1;
    
    else
        return number * func1(number - 1);
}
