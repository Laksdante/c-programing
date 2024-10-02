#include <stdio.h>

int  main ()
{
    int age = 29;
    char status;
    status = (age>30) ? 'M' : 'U';
    if (status == 'U')
    printf("Married");
    else
    printf("Unmarried");
    return 0;
    }

