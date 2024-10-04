#include<stdio.h>
#include<math.h>
// #include<stdbool.h>

//Addition of two numbers
/*int main()
{
    int val1,val2,ans;
    printf("Enter first number: ");
    scanf("%d",&val1);

    printf("Enter second number: ");
    scanf("%d", &val2);

    ans = val1 + val2;

    printf("Addition of two numbers is: %d",ans);

    return 0;
}*/


//Swap two numbers
/*int main()
{
    int val1, val2,temp;
    printf("Enter first number:");
    scanf("%d", &val1);

    printf("Enter second number: ");
    scanf("%d", &val2);

    printf("Numbers before swap:%d %d\n",val1,val2);

    temp = val1;
    val1 = val2;
    val2 = temp;

    printf("Numbers after swap:%d %d",val1,val2);

    return 0;
}*/


//To calculate size of variou datataypes
/*int main()
{
    printf("Character takes %d bytes of memory\n",sizeof(char));
    printf("Integer takes %d bytes of memory\n", sizeof(int));
    printf("Float takes %d bytes of memory\n", sizeof(float));
    printf("Double takes %d bytes of memory\n", sizeof(double));
    printf("Long takes %d bytes of memory\n", sizeof(long));
    printf("Boolean takes %d bytes of memory\n", sizeof(bool));
    return 0;
}*/

/*int main()
{
    // printf("%d %d %d %d",72,072,0x72,0X72);    //72,58,114,114  decimal octal and both hexadecimal
    // printf("%d % %x",72,72,72); //72 110 48 decimal octal hexadecimal
    // printf("%i %i %i %i", 72, 072, 0x72, 0X72);  //72,58,114,114  decimal octal and both hexadecimal
    // printf("%05d,%5d,%-5d",32,32,32);    //00032,___32,32___
    //5 col wide right justified and padded by zero, 5 col wide right justified and blank ,5 col wide left justified and blank

    // printf("% 6.3f, % 06.3f, % 09.3f, % -09.3f, % 6.0f, % 6.0f", 45.6, 45.6, 45.6, 45.6, 45.4, 45.6);  //45.600, 45.600, 0045.600, 45.600, 45, 46
    // %6.3f means 6 col wide and 3 is the no of digits after decimal //45.600
    // %6.3f means 6 col wide and 3 is the no of digits after decimal and o is blank spaces padded by zeros //45.600
    // %06.3f 6 col wide and 3 digits after decimal padded with 0 // 00045.600
    // %09.3f 9 col wide and 3 digits after decimal padded with 0 // 45.600
    //%09.3f 9 col wide and 3 digits after decimal padded with 0 and left alligned //45.600_ _ _
    //%6.0f 6 col wide 0 digits after decimal so rounded to 45 _ _ _ _ 45
    //%6.0f 6 col wide 0 digits after decimal so rounded to 46 _ _ _ _ 46

    // printf("c :\\tc\\bin");  //c :\\tc\\bin
    // printf("% d % d % d % d % d\n", sizeof(032), sizeof(0x32), sizeof(32), sizeof(32U), sizeof(32L)); // 4 4 4 4
    // printf("% d % d % d", sizeof(32.4), sizeof(32.4f), sizeof(32.4F)); // 8 4 4 4
    // printf("%d %c");
    //printf("%d",sizeof('\n'));//1 cz of decimal
    // printf("bytes occupied by '7' = % d\n", sizeof('7')); //4
    // printf("bytes occupied by 7 = % d\n", sizeof(7));  //4
    // printf("bytes occupied by 7.0 = % d\n", sizeof(7.0));  //4
    // printf("char occupies % d byte\n", sizeof(char)); //1
    // printf("int occupies % d bytes\n", sizeof(int)); //4
    // printf("float occupies % d bytes", sizeof(float)); //4
    // printf("% d % c",'A','A'); //65 A %d for A is ASCII value

    // float a = 3.5e38;
    // double b = 3.5e309;
    // printf("% f % lf", a, b); //error cz double exceeds range

    // char a = 128;
    // unsigned char b = 256;
    // printf("% d % d\n", a, b);  // large integer implicitly truncated to unsigned type [-Woverflow]

    // int a = 32768; 
    // unsigned int b = 65536;
    // printf("% d % d", a, b); //-32768 65536
}*/


//fahrenheit to celsius
/*int main()
{ 
    float f,c;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&f);
    c = 5.0/9.0*(f - 32);
    printf("Temperature in Celsius is :%6.2f",c);
    return 0;
}*/

//Circumference and Area of circle
/*int main()
{
    float r,cir,area;
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    cir = 2*22/7*r;
    area = 22/7*r*r;
    printf("Circumference of circle:%6.2f\n",cir);
    printf("Area of circle:%6.2f\n", area);
    return 0;
}*/


//Average of three numbers
/*int main()
{
    float no1,no2,no3,avg;
    printf("Enter three numbers:\n");
    scanf("%f %f %f",&no1,&no2,&no3);
    avg = (no1+no2+no3)/3;
    printf("Average is:%6.2f\n",avg);
    return 0;
}*/


//Simple interest and maturity amout
/*int main()
{
    float p,roi,t,i,amt;
    printf("Enter principle, rate and time:\t");
    scanf("%f %f %f",&p,&roi,&t);
    i = p*roi*t/100;
    amt = p + i;
    printf("Interest is %6.2f\n",i);
    printf("Amount is %6.2f:\n",amt);
    return 0;
}*/


//Area of triangle
/*int main()
{   
    float a,b,c,s,area;
    printf("Enter three sides:\n");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:%6.2f\n",area);
    return 0;
}*/


//Convert velocity from km/hr to m/sec
/*int main()
{
    float velk,velm;
    printf("Enter velocity in km/hr:\n");
    scanf("%f",&velk);
    velm = velk*5/18;
    printf("Equivalent velocity in m/sec is:%f m/sec",velm);
    return 0;
}*/


//Find velocity from acceleration and initial velocity
/*int main()
{
    float u,v,a,t;
    printf("Enter the value of initial velocity in m/s:\n");
    scanf("%f",&u);
    printf("Enter the amount of acceleration:\n");
    scanf("%f",&a);
    printf("Enter the time in sec:\n");
    scanf("%f",&t);
    v = u + a*t;
    printf("Velocity after %4.2f sec is %4.2f m/s:",t,v);
    return 0;
}*/


//accept age in years and convert it into equivalent no of seconds
/*int main()
{
    int age;
    float age_in_sec;
    printf("How old are you?:\t");
    scanf("%d",&age);
    age_in_sec = 3.156E7 * age;
    printf("Your age in seconds is %5.2E",age_in_sec);
    return 0;
}*/


