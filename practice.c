//TODO: Try commenting out the next 4 lines as a block
Author: Aline Normoyle
Date: 9/6/2022
This is a multiline comment. 
An example C program using an array. 

#include <stdio.h>

int main() {
    int i, size = 0;

    // declare array of 10 ints
    int my_arr[10];
    my_arr[0] = 0;

    // set the value of each array element
    for (i = 0; i < 10; i++) {
        my_arr[i] = i;
        size++;
    }

    // set values at positions 3,4,5 to 100
    my_arr[3] = 100;
    my_arr[4] = 100;
    my_arr[5] = 100;

    // print the number of array elements
    printf("array of %d items:\n", size);

    // print each element of the array
    for (i = 0; i < 10; i++) {
        printf("%d\n", my_arr[i]);
    }

    return 0;
}


