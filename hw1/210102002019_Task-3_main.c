/*
 * main.c
 *
 *  Created on: 3 Mar 2023
 *      Author: Hasan Kınaç
 * 		Email : h.kinac2021@gtu.edu.tr
 *		Id : 210102002019
 */

#include <stdio.h>

int main(){

	int arr[3];

	for ( int i = 0; i < 3; i++){
		printf("Type number %d of 3 numbers : ",i+1);
		scanf("%d",&arr[i]);
	}

	if (arr[0] >= arr[1] && arr[0] >= arr[2])
    printf("%d is the largest number.", arr[0]);

	else if (arr[1] >= arr[0] && arr[1] >= arr[2])
    printf("%d is the largest number.", arr[1]);

	else
		printf("%d is the largest number.", arr[2]);

	return 0;
}
