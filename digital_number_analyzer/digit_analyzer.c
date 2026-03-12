#include "digit_analyzer.h"

void analyzer(int n, int *sum, int *count, int *reverse) {
    *sum = 0;
    *count = 0;
    *reverse = 0;
    
    while(n > 0) {
        *sum += n % 10;
        *count += 1;
        *reverse = *reverse * 10 + n % 10;
        n /= 10;
    }
}