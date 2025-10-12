#include <stdio.h>
#include <time.h>
#include "fibonacci.h"

#define N 30

int main() {
    int DP_Fib[N + 1];
    for (int i = 0; i <= N; i++)
        DP_Fib[i] = -1;

    clock_t start_naive, end_naive, start_dp, end_dp;
    int result_naive, result_dp;

    start_naive = clock();
    result_naive = fib_naive(N);
    end_naive = clock();
    double time_naive = (double)(end_naive - start_naive) / CLOCKS_PER_SEC;

    start_dp = clock();
    result_dp = fib_dp(N, DP_Fib);
    end_dp = clock();
    double time_dp = (double)(end_dp - start_dp) / CLOCKS_PER_SEC;

    printf("Naive: result = %d, time = %f seconds\n", result_naive, time_naive);
    printf("DP with memoization: result = %d, time = %f seconds\n", result_dp, time_dp);

    return 0;
}
