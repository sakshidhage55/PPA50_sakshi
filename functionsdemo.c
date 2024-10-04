#include <stdio.h>

int main()
{
    //Local Variable
    int Value1 = 0, Value2 = 0, Ret = 0;

    printf("Enter first number: \n");
    scanf("%d", &Value1); //%d mhanje je input apan ghenar te decimal pahije

    printf("Enter second number: \n");
    scanf("%d", &Value2);

    Ret = Value1 * Value2;

    printf("Multiplication is : %d\n", Ret);

    return 0;
}