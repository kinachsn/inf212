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
	int x,y;
	double z;
	printf("type number x (int) : ");
	scanf("%d",&x);
	printf("type number y (int) : ");
	scanf("%d",&y);
	printf("type number z (double) : ");
	scanf("%lf",&z);

	printf("\n==Operations==\n\n");
	printf("x + y = %d\n",x+y);
	printf("x * y = %d\n",x*y);
	printf("x / y = %lf\n",x/y); /* Since a two integer division operation is done, the result will be also integer. 
								  But we are using double format specifier that's why the result will not be displayed properly.*/
	printf("x * y * z = %lf\n",x*y*z);

	return 0;
}
