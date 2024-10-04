#include <stdio.h>
int main()
{
    char ch = 'A';        // 1 byte
    int i = 11;           // 4 byte
    float f = 90.89;      // 4 byte
    double d = 90.768459; // 8 byte

    int Arr[5];    // 20 bytes
    double Brr[5]; // 40 bytes
    float Crr[5];  // 20 bytes
    char Drr[5];   // 5 bytes

    printf("%d\n", sizeof(ch)); // printf("%lu\n", sizeof(ch)); lu=long unsigned
    printf("%d\n", sizeof(i));  // printf("%lu\n", sizeof(ch)); lu=long unsigned
    printf("%d\n", sizeof(f));  // printf("%lu\n", sizeof(ch)); lu=long unsigned
    printf("%d\n", sizeof(d));  // printf("%lu\n", sizeof(ch)); lu=long unsigned

    printf("%d\n", sizeof(Arr));
    printf("%d\n", sizeof(Brr));
    printf("%d\n", sizeof(Crr));
    printf("%d\n", sizeof(Drr));

    printf("%d\n", sizeof(Arr[0]));
    printf("%d\n", sizeof(Brr[2]));
    
    return 0;
}