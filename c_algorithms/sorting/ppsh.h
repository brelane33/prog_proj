/*PROG_PROJ Sort Help
    Contains functions to be frequently used while implementing sorting algorithms
*/
#ifndef PPSH_H
#define PPSH_H

#include <stdio.h>
#include <stdbool.h>

//takes an integer and an array of integers, both called by ref.
void testiewestie(int *a, int *array)
{
    array[2] = (*a + array[1]) * 10;

    return;
}

//takes array of integers and an integer, called by ref and val respectively
void printarray(int *array, int size)
{
    for(int i = 0; i < size;i++){
        printf("%d ",array[i]);
    }

    return;
}

void swapints(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    return;
}

#endif
