#include<stdio.h>

struct Demo    //he global declaration ahe karan structure main pasun baher aahe
{
   int no;
   int data; 
};

int main()
{
    struct Demo obj;

    struct Demo *ptr = &obj;

    obj.no = 11;

    ptr->data = 21;
    
    
    
    return 0;
}