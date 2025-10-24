#pragma once
#include <string>
#include <vector>

using namespace std;


// Наибольшая общая подстрока
string LCS(string a, string b) {
    int n = a.size();
    int m = b.size();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // база
    for (int i = 1; i <= m; ++i)
        dp[i][0] = 0;

    for (int j = 1; j <= n; ++j)
        dp[0][j] = 0;

    // индукция
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int ans = dp[n][m];

    // восстановление ответа
    int cur_m = n, cur_n = m;
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

