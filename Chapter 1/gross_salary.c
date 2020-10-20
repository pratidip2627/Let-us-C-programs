/*Calculating Gross Salary*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    int basic_sal;
    float dear_allow, house_allow, gross_sal;
    printf("Enter Your Basic Salary:");
    scanf("%d", &basic_sal);
    /*calculation of dear_allow*/
    dear_allow = basic_sal * 40 / 100;
    /*calculation of house_allow*/
    house_allow = basic_sal * 20 / 100;
    /*calculation of gross salary*/
    gross_sal = basic_sal + dear_allow + house_allow;
    printf("Your Gross Salary is: %.2f", gross_sal);
}