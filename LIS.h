#pragma once
#include <string>
#include <vector>

using namespace std;

// наибольшая возрастающая подпоследовательность
int LIS(vector<int>& a) {
    int n = a.size();
    if (n == 0) return 0;

    vector<int> dp(n + 1, INT_MAX); // dp[i] - на какой элемент заканчивается НВП длины i
    dp[0] = INT_MIN;
    int ans = 0;

    for (int i=0; i < n; i++) {
        int l = 0, r = n;
        while (l + 1 != r) {
            int mid = (l + r) / 2;
            if (dp[mid] < a[i]) {
                l = mid;
            }
            else {
                r = mid;
            }
        }
        dp[l + 1] = a[i];
        ans = max(ans, l + 1);
    }

    return ans;
}