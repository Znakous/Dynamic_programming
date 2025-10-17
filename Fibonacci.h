#pragma once
#include <vector>

using namespace std;

int FindNthFibonacci(int n) {
    // max на случай, если n < 2 и возникнут проблемы с инициализацией базы
    vector<int> fib(max(n, 2));
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n - 1];
}

int FindNthFibonacciNoMemory(int n) {
    int prev = 0;
    int cur = 1;
    for (int i = 2; i < n; i++) {
        int next = prev + cur;
        prev = cur;
        cur = next;
    }
    return cur;
}