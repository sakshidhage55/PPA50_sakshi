#include <stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};

    printf("Address of Arr is : %d\n", Arr);
    printf("Address of Arr is : %d\n", &Arr);
    printf("Address of Arr is : %d\n", &(Arr[0]));

    printf("First Element is : %d\n", Arr[0]);
    printf("Second Element is : %d\n", Arr[1]);
    printf("Third Element is : %d\n", Arr[2]);

    printf("%d\n", Arr[2]);
    printf("%d\n", *(Arr + 2));
    printf("%d\n", *(2 + Arr));
    printf("%d\n", 2 [Arr]);    // *(Arr + 2)

    return 0;
}