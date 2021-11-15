#include<stdio.h>
main()
{
    int a=-12;
    while(a<0)
    {
        printf("You are inside while loop\n");
    }
    printf("Came out of the while loop\n");
    do
    {
        printf("You are inside do-while loop\n");
        a=a+1;
    }while(a<0);
    printf("After do while loop\n");
}