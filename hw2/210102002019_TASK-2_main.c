/*
 * main.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */

#include<stdio.h>

int main(){
    
    int number;
       
    printf("Enter the number : ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);

    for (int i = 0; i <= 29; i++)
            printf("%d x %d = %d\n", number, i, number * i);
        
 	return 0;
 }