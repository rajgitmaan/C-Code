#include <stdio.h>

int main()
{
    // The distance between two cities (in km.) is input through the keyboard.
    //  Write a program to convert and print this distance in meters, feet, inches and centimeters.

    float distance, m, f, i, c;
    printf("Enter distance in km\n");
    scanf("%f", &distance);
    m = distance * 1000;
    f = distance * 3280.84;
    i = distance * 39370.1;
    c = distance * 10000;
    printf("distance in meters = %2f\n", m);
    printf("distance in feet = %2f\n", f);
    printf("distance in inches = %2f\n", i);
    printf("distance in centimeters = %2f\n", c);
    return 0;
}