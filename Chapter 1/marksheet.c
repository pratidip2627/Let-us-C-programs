/*Calculating Aggregate marks and Percentages*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum;
    float aggr, per;
    printf("Enter Marks of 5 subjects:");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    sum = m1 + m2 + m3 + m4 + m5;
    aggr = sum / 5;
    per = sum * 100 / 500;
    printf("Your Aggregate Score is :%.2f\n", aggr);
    printf("Your Percentage score is:%.2f", per);
}