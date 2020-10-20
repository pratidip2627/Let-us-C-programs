/*Calculating various paper size based on A0 size*/
/*Author : Dilip Rathod*/

#include <stdio.h>
int main()
{
    int width, height, temp;
    printf("Enter width and height of A0 Paper:");
    scanf("%d%d", &width, &height);
    printf("A0 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A1 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A2 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A3 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A4 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A5 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A6 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A7 Size:%d X %d\n", width, height);
    temp = height / 2;
    height = width;
    width = temp;
    printf("A8 Size:%d X %d\n", width, height);
    return 0;
}