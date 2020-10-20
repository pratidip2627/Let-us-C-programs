/*Temperature converter from fahrenheit to centigrade*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    float farn, cent;
    printf("Enter your city temperature in Fahrnheit:");
    scanf("%f", &farn);
    /*formula to convert fahrenheit to centigrade*/
    cent = (farn - 32) * 0.55555555555;
    printf("Temperature of your city in Celsius is:%.2f", cent);
}