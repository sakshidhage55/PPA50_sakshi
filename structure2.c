#include <stdio.h>

struct Marvellous
{
    int no;
    float f;
    int i;
};

int main()
{
    struct Marvellous mobj;

    struct Marvellous *ptr = &mobj;

    ptr->no = 11;
    ptr->f = 90.99;
    ptr->i = 21;

    printf("%d\n", ptr->no);
    printf("%d\n", mobj.no);

    printf("%d\n", sizeof(mobj));

    // printf("%d\n", sizeof(ptr->no));
    // printf("%d\n", sizeof(ptr->f));
    // printf("%d\n", sizeof(ptr->i));

    return 0;
}