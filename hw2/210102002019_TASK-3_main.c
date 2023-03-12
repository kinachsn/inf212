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

void func1(int lower_bound,int upper_bound)
{
	int current_num = lower_bound;

	printf("Perfect Numbers List\n\n");

	while(current_num <= upper_bound){
		
		int sum_of_divisors = 0; // sum of divisor numbers (reset each turn)
		int divisor = 1; // divisor number (reset each turn)
		
		while(divisor < current_num){

			if (current_num % divisor == 0)
				sum_of_divisors += divisor;

			divisor++;
		}
		
		if(sum_of_divisors == current_num)
			printf("%d\n",current_num);
		
		current_num++;
	}
}
