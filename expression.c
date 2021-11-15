#include<stdio.h>
main()
{
    int np=20;
    char y;
    if(np>2000)
    {
        y='r';
    }
    else
    {
        y='k';
    }
    y=(np>2000)? 'r' : 'k';
    printf("Value of y is: %c\n",y);
}

  
