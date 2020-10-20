/*Calculating area and perimeter of rectangle, area and circumference of circle.*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    int length, breadth, radius;
    float aor, per, aoc, cir;
    printf("Enter length of Rectangle:\n");
    scanf("%d", &length);
    printf("Enter breadth of Rectangle:\n");
    scanf("%d", &breadth);
    printf("Enter radius of Circle:\n");
    scanf("%d", &radius);
    /*formula for area of rectangle*/
    aor = length * breadth;
    /*perimeter of rectangle*/
    per = 2 * (length + breadth);
    /*area of circle*/
    aoc = 3.14 * radius * radius;
    /*circumference of circle*/
    cir = 2 * 3.14 * radius;
    printf("Area of Rectangle:%.2f\n", aor);
    printf("Perimeter of Rectangle:%.2f\n", per);
    printf("Area of Circle:%.2f\n", aoc);
    printf("Circumference of Rectangle:%.2f\n", cir);
    return 0;
}