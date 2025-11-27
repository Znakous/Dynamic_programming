#include <iostream>

#include "Fibonacci.h"
#include "Knapsack.h"
#include "LCS.h"
#include "LIS.h"
#include "Levenstein.h"
#include "SlidingWindow.h"

void FibonacciDemo() {
    cout << FindNthFibonacci(10) << " " << FindNthFibonacciNoMemory(10) << endl;
}

void KnapsackDemo() {
    weights = {2, 1, 4, 1};
    prices = {2, 1, 7, 3};
    SolveKnapsack(4);

    // вывод элементов, которые взяли
    for (auto el : elements) {
        cout << "weight: " << el.first << " price: " << el.second << endl;
    }
}

void SlidingWindowDemo() {
    cout << MaxKSegmentSum(2, {1, 2, 3, 6, 4, 1, 0}) << endl;
}

void LCSDemo() {
    string a, b;
    a = "aboba";
    b = "banana";
    cout << LCS(a, b) << endl;
}

void LISDemo() {
    vector<int> nums = {2, 3, 1, 7, 2, 8, 5, 10, 100, 6};
    cout << LIS(nums);
}
void LevDistanceDemo() {
    string a, b;
    a = "aboba";
    b = "banana";
    int ch = 1, del = 1, ins = 1;
    cout << LevDistance(a, b, ch, del, ins) << endl;
}
int main() {
    // FibonacciDemo();
    // KnapsackDemo();
    // SlidingWindowDemo();
    // LCSDemo();
    // LISDemo();
    // LevDistanceDemo();
}