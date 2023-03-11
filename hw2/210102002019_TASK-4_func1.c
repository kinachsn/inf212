/*
 * func1.c
 *
 *  Created on: 11 Mar 2023
 *      Author: Hasan Kınaç
 *		Email: h.kinac2021@gtu.edu.tr
 */

unsigned long long func1(int number)
{
    if (number == 0)
        return 1;
    
    else
        return number * func1(number - 1);
}
