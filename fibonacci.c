#include "fibonacci.h"

int fib_naive(int n) {
    if (n <= 1)
        return n;
    return fib_naive(n - 1) + fib_naive(n - 2);
}

int fib_dp(int n, int DP_Fib[]) {
    if (n <= 1)
        return n;
    if (DP_Fib[n] != -1)
        return DP_Fib[n];
    DP_Fib[n] = fib_dp(n - 1, DP_Fib) + fib_dp(n - 2, DP_Fib);
    return DP_Fib[n];
}
