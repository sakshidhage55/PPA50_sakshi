#include <stdio.h>
#include <stdlib.h> //for malloc, calloc, realloc & free

int main()
{
    int Arr[5]; // Static memory allocation - gharatlya lokancha swayampak
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &Size);

    ptr = (int *)calloc(Size , sizeof(int)); //(int *) it is typecasting
    //ptr = (int *)calloc(12, 500ml);
    // ptr = (int *)malloc(6000ml);  // 6 ltr

    // Use the memory

    free(ptr);

    return 0;
}