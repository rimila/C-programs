#include<stdio.h>
int main()
{
    int i,fact=1,number;
    number = 5;
        for(i=1;i<=number;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is: %d ,number,fact");
    return 0;
}