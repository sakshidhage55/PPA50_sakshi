#include<stdio.h>
//pre and post increment
/*int main()
{
    int a = 10, x, y;
    x = ++a;   
    y = a++;   
    printf("Pre-increment:%d\n",x);   //10
    printf("Post-increment:%d\n",y);  //10
    return 0;
}*/


//Logical AND
/*int main()
{
    int i = 0, j = 1, k = 2, l;
    l = i&&j++&&k++;
    printf("Resultant values after evaluation are:\n");
    printf("%d %d %d %d",i,j,k,l);  //0 1 2 0
    return 0;
}*/


//Comma operator
/*int main()
{
    int a,b;
    a = 1,2,3,4,5;
    b = (1,2,3,4,5);
    printf("Resultant values of a and b are:%d %d",a,b);  //1 5  
    return 0;
}*/


//sizeof
/*int main()
{
    int a = 1,b;
    b = (sizeof(++a));
    printf("Resultant values of a and b are:%d %d",a,b);  //1 4
}*/


// some operations
/*int main(){
    int a = 10, b = 20;
    a = a * b;
    b = a / b;
    a = a / b;
    printf("%d %d\n",a,b);
    a = a^b;
    b = a^b;
    printf("%d %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    return 0;
}*/


/*int main()
{
    // int a = 12,b;
    // printf("%d %d",b,b=a);

    // int a = 23, b = 12, c = 10, d;

    // d = c + 2 = b + 1 = a;
    // printf("%d %d %d %d",a,b,c,d); error
    
    // d = c = b =a;
    // printf("%d %d %d %d", a, b, c, d); 23 23 23 23

    // int a = 2, b = 3, c = 1, d;
    // d = a<b>c;   2>3 is true i.e 1<1 is false i.e. 0
    // printf("%d",d); 

    int a = 012, b = 034;
    int x = 0x12, y = 0x34;
    int c,d,u,v;
    c = a&b;
    d = a||b;
    u = x&&y;
    v = x||y;
    printf("%d %d %d %d",c,d,u,v);
    return 0;
}*/


//one's and two's complement
/*int main()
{
    int num, oc, tc;
    printf("Enter number:\n");
    scanf("%d",&num);
    oc = ~num;
    tc = oc + 1;
    printf("One's complement is:%d\n",oc);
    printf("Two's complement is:%d\n",tc);
    return 0;
}*/

// |  Given two numbers, say val and key. Wherever the bits of number key are 1, set the corresponding bits of number val.Leave all other bits of number val unchanged
/*int main()
{
    int val, key;
    printf("Enter two numbers\t");
    scanf("% d % d", &val, &key);
    val = val | key;
    printf("After setting bits, result is % d", val);
    return 0;
}*/

//  Write a C program to multiply a given number with 2n, without using a multiplication operator.The value of n will be entered by the user
int main()
{
    int num, n, res;
    printf("Enter number to be multiplied:\n");
    scanf("%d",&num);
    printf("Enter value of n:\n");
    scanf("%d",&n);
    res=num<<n;
    printf("Result of multiplication is:%d",res);
    return 0;
}