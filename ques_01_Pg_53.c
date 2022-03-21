#include <stdio.h>

int main()
{
    printf("yuvraj dahiya\n");
    int gender, qualification, yos, salary = 0;
    printf("Male=0/Female=1\n");
    scanf("%d", &gender);
    printf("Graduate=0/Post-Graduate=1\n");
    scanf("%d", &qualification);
    printf("Years of service ?\n");
    scanf("%d", &yos);
    if (gender == 0 && yos < 10 && qualification == 1)
    {
        salary = 10000;
    }
    if (gender == 0 && yos < 10 && qualification == 0)
    {
        salary = 7000;
    }
    if (gender == 0 && yos >= 10 && qualification == 1)
    {
        salary = 15000;
    }
    if (gender == 0 && yos >= 10 && qualification == 0)
    {
        salary = 10000;
    }
    if (gender == 1 && yos < 10 && qualification == 0)
    {
        salary = 6000;
    }
    if (gender == 1 && yos < 10 && qualification == 1)
    {
        salary = 10000;
    }
    if (gender == 1 && yos >= 10 && qualification == 1)
    {
        salary = 12000;
    }
    if (gender == 1 && yos >= 10 && qualification == 0)
    {
        salary = 9000;
    }
    printf("Salary = %2d", salary);
    return 0;
}
