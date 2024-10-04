#include <stdio.h>

struct Student
{
    int RollNo;    // 4
    char Division; // 1
    int Age;       // 4
    float Marks;   // 4
    int Salary;    // 4
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    printf("Size of object is : %d\n", sizeof(Amit));

    Amit.RollNo = 11;
    Amit.Division = 'A';
    Amit.Age = 19;
    Amit.Marks = 90.89;
    Amit.Salary = 210000;

    Pooja.RollNo = 21;
    Pooja.Division = 'D';
    Pooja.Age = 17;
    Pooja.Marks = 93.67;
    Pooja.Salary = 5000;

    printf("Age of Amit : %d\n", Amit.Age);
    printf("Age of Pooja : %d\n", Pooja.Age);

    printf("Salary of Amit : %d\n", Amit.Salary);
    printf("Salary of Amit : %d\n", Pooja.Salary);
    return 0;
}