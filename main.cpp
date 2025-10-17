#include <iostream>

#include "Knapsack.h"
#include "LCS.h"
#include "SlidingWindow.h"

void KnapsackDemo() {
    weights = {1, 2, 3, 4};
    prices = {1, 2, 3, 2};
    SolveKnapsack(4);
    for (auto el : elements) {
        cout << el.first << " " << el.second << endl;
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
int main() {
    // KnapsackDemo();
    // SlidingWindowDemo();
    LCSDemo();
}