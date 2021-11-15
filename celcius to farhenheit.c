#include<stdio.h>

int main()
{
    float f, c;
    printf("Enter temperature in Celcius =");
    scanf("%f", &c);
    f = 9.0 / 5.0 * c + 32;
    printf("The temperature in Farenheit is = %.1f f", f);
    return 0;
}
