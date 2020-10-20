/*Distance Converter*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    float km, m, ft, inch, cm;
    /*
    1 km = 1000 m
    1 km = 3280.84 ft
    1 km = 39370.1 inches
    1 km = 100000 cm
    */
    printf("Enter Distance in KM:");
    scanf("%f", &km);
    /*Converting distance*/
    m = 1000 * km;
    ft = 3280.84 * km;
    inch = 39370.1 * km;
    cm = 100000 * km;
    printf("Your distance in:\n");
    printf("Meter:%.2f\n", m);
    printf("Feet:%.2f\n", ft);
    printf("Inches:%.2f\n", inch);
    printf("Centimeters:%.2f\n", cm);
}