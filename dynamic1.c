#include<stdio.h>
#include<stdlib.h>  //for malloc, calloc, realloc & free

int main()
{
    int Arr[5];  //Static memory allocation - gharatlya lokancha swayampak
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &Size);

    ptr = (int *)malloc(Size * sizeof(int));  //(int *) it is typecasting
    // = (int *)malloc(6 * 4);
    // = (int *)malloc(24);
    
    // Use the memory

    free(ptr);

    return 0;
}