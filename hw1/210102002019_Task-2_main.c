/*
 * main.c
 *
 *  Created on: 3 Mar 2023
 *      Author: Hasan Kınaç
 * 		Email : h.kinac2021@gtu.edu.tr
 *		Id : 210102002019
 */

#include <stdio.h>
#include <math.h>

int main(){
	int x,y;
	printf("Type number x (int) : ");
	scanf("%d",&x);

	if ( x < 0){
		y = pow(x,2);
		printf("y = %d\n", y);
	}
	else if ( 0 <= x && x <= 10)
	{
		y = pow(x,2) + 5*x - 10;
		printf("y = %d\n", y);
	}
	else{
		y = pow(x,3);
		printf("y = %d\n", y);
	}

	return 0;
}
