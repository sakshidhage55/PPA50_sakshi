#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// SEEK_SET     Beginning of file
// SEEK_CUR     Current position
// SEEK_END     End of file
int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30] = {'\0'}; // pudhe print karn thambat nahi mhanun \0

    printf("Enter name of file that you want to open : \n");
    scanf("%s", Name); //%s for string

    fd = open(Name, O_RDWR);

    lseek(fd, 10, SEEK_SET);
    
    iRet = read(fd, Data, 10);

    printf("%d bytes gets successfully read from the file\n", iRet);

    printf("%s", Data);

    close(fd);

    return 0;
}