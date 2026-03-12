#include "sensor.h"

void analyze(int *tempratureValues, float *average, int *min, int *max)
{
    int sum = 0;
    *max = tempratureValues[0];
    *min = tempratureValues[0];

    for (int i = 0; i < 10; i++) {
        sum += tempratureValues[i];
        if (tempratureValues[i] > *max) *max = tempratureValues[i];
        if (tempratureValues[i] < *min)  *min  = tempratureValues[i];
    }

    *average = (float)sum / 10;
}