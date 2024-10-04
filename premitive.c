#include<stdio.h>

int main()    //main he function pratyek c ani c++ madhe compulsory ast ch
{
    printf("Inside main function...\n");

    char cValue = 'M';          //coding convention mhanje set of rules for bwriting code or variable chya navavarun tyacha datatype kalto
    int iValue = 11;
    float fValue = 90.98f;
    double dValue = 90.67452378;

    return 0;
}

//Step 1 : Compile the code
// gcc premitive.c -o Myexe

//Note : gcc is a part of MINGW software

//Step 2: Execute th ecode
//Myexe.exe     For Windows
//./Myexe       For Linux / Macos


/*
    void         We cannot create variable
    char         1 byte
    int          4 bytes
    float        4 bytes
    double       8 bytes
    boolean      1 bit

    Note : 1 byte = 8 bits
*/