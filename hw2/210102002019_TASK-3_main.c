/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */
#include <stdio.h>

void func1(int,int);

int main()
{
	int lower_bound,upper_bound;

	printf("Type a lower bound and an upper bound respectively : ");

	if (!(scanf("%d %d",&lower_bound,&upper_bound)))

	printf("Something went wrong !");

	else
		func1(lower_bound,upper_bound);

	return 0;
}
