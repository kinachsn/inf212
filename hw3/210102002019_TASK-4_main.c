#include <stdio.h>
#include "210102002019_TASK-4_main.h"

int main(){
    int array[10];

    for(int i = 0;i<10;i++){
        array[i] = i;
    }
    printf("%p",func1(array,10));
}
