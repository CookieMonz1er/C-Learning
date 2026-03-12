#include <stdio.h>
#include "sensor.h"
// My best creation yet!

int main(void)
{

    int tempratureValues[10];

    printf("Please enter 10 temprature values: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d. sayiyi gir: ", i + 1);
        scanf("%d", &tempratureValues[i]);
    }

    float average;
    int min, max;

    analyze(tempratureValues, &average, &min, &max);

    printf("Average: %.2f\n", average);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}