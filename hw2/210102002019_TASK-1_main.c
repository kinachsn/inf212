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
	int number,divisor,sum_of_divisors;
	int divisors[50]; // Bring all divisor numbers together in an array.
	int counter;
	
	printf("Type a number : ");
	
	if (!(scanf("%d",&number)))
	
	printf("Something went wrong !");
	    
	else{
	 
	sum_of_divisors = 0; // sum of divisor numbers
    counter = 0;   // for index of array.
	divisor = 1; // divisor number (ascending each turn of while loop)
	
	    
	while(divisor <= number){
		    
		if (number % divisor == 0){
			
		sum_of_divisors += divisor;		
		divisors[counter] = divisor;
		counter++;
		
		}
		
		divisor++;
	}

    // Optional argument
    printf("\nDivisor of %d = {",number);
    
    for(int i = 0; i < counter;i++){
        if(i < counter - 1){
            printf("%d , ",divisors[i]);
        }
        else
            printf("%d",divisors[i]);
    }
    printf("}\n\n");
    //
    
	printf("Sum of divisors = %d",sum_of_divisors);
}
	return 0;
}
