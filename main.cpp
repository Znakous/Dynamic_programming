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

void LCSDemo() {
    string a, b;
    a = "aboba";
    b = "banana";
    cout << LCS(a, b) << endl;
}

void LISDemo() {
    vector<int> nums = {10,9,2,5,3,7,101,18};
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
    LevDistanceDemo();
}