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
	double arr[3];
	double root1,root2;

	for ( int i = 97; i < 100; i++){
		printf("Enter coefficients - %c (ax² + bx + c) : ",i);
		scanf("%lf",&arr[i-97]);
	}
	double a = arr[0];
	double b = arr[1];
	double c = arr[2];
	
	double discriminant = pow(b,2) - 4*a*c;

	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf\nroot2 = %.2lf", root1, root2);
	}
	else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
     else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lfi\nroot2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

	return 0;
}
