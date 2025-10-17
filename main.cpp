#include <iostream>

#include "Fibonacci.h"
#include "Knapsack.h"
#include "LCS.h"
#include "SlidingWindow.h"

void FibonacciDemo() {
    cout << FindNthFibonacci(10) << " " << FindNthFibonacciNoMemory(10) << endl;
}

void KnapsackDemo() {
    weights = {1, 2, 3, 4};
    prices = {1, 2, 3, 7};
    SolveKnapsack(5);

    // вывод элементов, которые взяли
    for (auto el : elements) {
        cout << "weight: " << el.first << " price: " << el.second << endl;
    }
}

void SlidingWindowDemo() {
    cout << MaxKSegmentSum(2, {1, 2, 3, 6, 4, 1, 0}) << endl;
}

// пока не проходили :(
void LCSDemo() {
    string a, b;
    a = "aboba";
    b = "banana";
    cout << LCS(a, b) << endl;
}
int main() {
    FibonacciDemo();
    // KnapsackDemo();
    // SlidingWindowDemo();
    // LCSDemo();
}