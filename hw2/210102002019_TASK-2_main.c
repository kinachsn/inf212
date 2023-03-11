/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */

#include <stdio.h>

int main()
{
	int number;

	printf("Type a number : ");
	
	if (!(scanf("%d",&number)))
	
	printf("Something went wrong !");
	    
	else{
	    
	printf("\nMultiplication table of %d\n\n",number);
	
	if(number == 0)
	    printf("0");
	    
	for(int i = 1; i <= number;i++){
		if(number % i == 0)
			printf("%d x %d = %d\n",i,number/i,number);
	}}
	return 0;
}
