#include<stdio.h>
int CheckEven(int);
int main()
{
    int value = '0';
    auto int ret = 0;
    printf("Please enter the value\n");
    scanf("%d",&value);

    ret = CheckEven(value);
    if (ret == 1)
    {
        printf("It is even number\n");
    }
    else 
    {
        printf("It is odd number");
    }


    return 0;
}

int CheckEven(int no)
{
    register int output = 0;
    if ((no %2) ==0)
    {
        output = 1;
    }
    else{
        output = 0;
    }
    return output;

}