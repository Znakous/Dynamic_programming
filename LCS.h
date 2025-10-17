#pragma once
#include <string>
#include <vector>

using namespace std;

string LCS(string a, string b) {
    int m = a.size();
    int n = b.size();
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int ans = dp[m][n];
    int cur_m = m, cur_n = n;
    string lcs;
    while (cur_m >= 0 && cur_n >= 0) {
        if (a[cur_m - 1] == b[cur_n - 1]) {
            lcs.push_back(a[cur_m - 1]);
            --cur_m; --cur_n;
        } else if (dp[cur_m - 1][cur_n] > dp[cur_m][cur_n - 1]) {
            --cur_m;
        } else {
            --cur_n;
        }
    }
    reverse(lcs.begin(), lcs.end());
    return lcs;
}

