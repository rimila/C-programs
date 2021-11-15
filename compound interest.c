#include<stdio.h>
#include<math.h>

int main()
{
    float PAmount, ROI, Time_Period, CIFuture, CI;

    printf("\nPlease enter the Principle Amount : \n");
    scanf("%f", &PAmount);

    printf("Please Enter rate of interest : \n");
    scanf("%f", &ROI);

    printf("Please Enter the time period in years : \n");
    scanf("%f", &Time_Period);

    CIFuture = PAmount * (pow(( 1+ ROI/100), Time_Period));
    CI = CIFuture - PAmount;

    printf("\nFuture Compound Interest for Principle Amount %.2f is = %.2f", PAmount, CIFuture);
    printf("\nCompound Interest for Principle Amount %.2f is = %.2f", PAmount, CI);

    return 0;
}