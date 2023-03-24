/*
 * main.c
 *
 *  Created on: 24 Mar 2023
 *      Author: Hasan Kınaç
 */
#include <stdio.h>

#define ARRAY_SIZE 		6

int main(){
	float array[ARRAY_SIZE];
	float n;
	float sum = 0;

	for(int i = 0;i < ARRAY_SIZE;i++){
		printf("Type an element of array : ");
		scanf("%f",&n);
		array[i] = n;
		sum += n;
	}
	printf("elements of the array :\n");
	for(int i = 0;i < ARRAY_SIZE;i++){
		printf("%f\n",array[i]);
	}

	printf("the average of elements in float array : %f",sum / ARRAY_SIZE);
	return 0;
}

