/*
 * myheader.h
 *
 *  Created on: 24 Mar 2023
 *      Author: Hasan
 */

#ifndef MAIN_H_
#define MAIN_H_

int* func1(int* arr, int size) {
    int num;
    printf("Enter a number to search for: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == num) {
            return (arr + i); // return address of first occurrence of num
        }
    }

    return 0; // return 0 if num is not found
}

#endif /* MYHEADER_H_ */
