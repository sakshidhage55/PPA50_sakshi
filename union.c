#include <stdio.h>

#pragma pack(1)
struct Demo
{
    int no;   // 4
    float f;  // 4
    int data; // 4
    char ch;  // 1
};            // 13

union Hello
{
    int no;   // 4
    float f;  // 4
    int data; // 4
    char ch;  // 4
};            // 4

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of structure is : %d\n", sizeof(dobj)); // 13 bytes
    printf("size of union is : %d\n", sizeof(hobj));     // 4 bytes

    hobj.no = 11;
    printf("%d\n", hobj.no);

    hobj.data = 21;
    printf("%d\n", hobj.no);
    printf("%d\n", hobj.data);


    return 0;
}