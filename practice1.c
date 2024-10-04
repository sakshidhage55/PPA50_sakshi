// Celsius to Fahrenheit
// #include <stdio.h>
// int main()
// {
//  float f,c;
//  printf("enter temp in fahrenheit\t");
//  scanf("%f",&f);
//  c = 5.0/9.0*(f-32);
//  printf("Temp in Celsius is %6.2f",c);
// }

// area and circumference of circle
// #include<stdio.h>
// int main()
// {
//     float r,area,cir;
//     printf("Enter radius of circle: \t");
//     scanf("%f",&r);
//     area=3.14*r*r;
//     cir=2*3.14*r;
//     printf("Area of the circle %6.2f\n ",area);
//     printf("Circumference of the circle %6.2f\n ",cir);
// }

// average of three numbers
// #include<stdio.h>
// int main()
// {
//     float n1,n2,n3,avg;
//     printf("enter three numbers:");
//     scanf("%f%f%f",&n1,&n2,&n3);
//     avg = (n1+n2+n3)/3;
//     printf("Average of numbers is %6.2f\n",avg);
// }

// Simple interest and maturity amount
// #include<stdio.h>
// int main()
// {
//     float p,roi,t,i,amt;
//     printf("Enter the principle,rate and time\t");
//     scanf("%f%f%f",&p,&roi,&t);
//     i = p*roi*t/100;
//     amt = p+i;
//     printf("Interest is %6.2f\n",i);
//     printf("Amount is %6.2f\n",amt);
// }

// Area of traingle
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float a,b,c,s,area;
//     printf("enter the sides of triangle\t");
//     scanf("%f%f%f",&a,&b,&c);
//     s=(a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Area of triangle %6.2f sq.units",area);
// }

// Velocity of an object is given in km/hr. C program to convert the ggiven velocity in m/sec
// #include<stdio.h>
// int main()
// {
//     float velk,velm;
//     printf("Enter velocity in km/h\t");
//     scanf("%f",&velk);
//     velm=velk*5/18;
//     printf("Equivalent velocity is %f m/sec",velm);
// }

// initial velocity,acceleratin and time is given then find the final velocity
// #include<stdio.h>
// int main()
// {
//     float u,a,t,v;
//     printf("Enter the value of intial velocity in m/sec\t");
//     scanf("%f",&u);
//     printf("Enter the value of acceleration");
//     scanf("%f", &a);
//     printf(" Enter the time in sec\t");
//     scanf("%f", &t);
//     v=u+a*t;
//     printf("Final velocity is %6.2f m/sec",v);
// }

// A year approximately consists of 3.156 x 10^7 seconds. Write a C program that accepts your age in years and convert it into equivalent number of seconds
// #include<stdio.h>
// int main()
// {
//     int age;
//     float age_in_sec;
//     printf("How old are you(years)?\t");
//     scanf("%d",&age);
//     age_in_sec = 3.156E7*age;
//     printf("Your age in seconds is %5.2E",age_in_sec);
// }