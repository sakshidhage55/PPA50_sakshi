#include <stdio.h>  
#include <stdlib.h> 
#include <unistd.h> 
#include <fcntl.h>  

// O_RDONLY     Read Mode
// O_WRONLY     Write Mode
// O_RDWR       Read + Write Mode
int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter name of file that you want to open : \n");
    scanf("%s", Name); //%s for string

    fd = open(Name, O_RDWR); //
    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened with FD %d\n", fd);
    }

    close(fd);

    return 0;
}