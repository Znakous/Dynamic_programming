#pragma once
#include <string>
#include <vector>

using namespace std;

// Расстояние Левенштейна для разных цен операций
int LevDistance(string& s1, string& s2,
    int ch, int del, int ins // стоимости операций
    ) {

    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    // dp[i][j] = количество монет, которое нужно отдать, чтобы
    // превратить s1[0...i-1] в s2[0...j-1]

    // база
    for (int i = 1; i <= n; ++i)
        dp[i][0] = i;

    for (int j = 1; j <= m; ++j)
        dp[0][j] = j;

    // индукция
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (s1[i - 1] == s2[j - 1]) // если совпала буква
                dp[i][j] = dp[i - 1][j - 1];// то переход бесплатный
            else
                dp[i][j] = min({
                    dp[i - 1][j - 1] + ch, // либо заменили
                    dp[i - 1][j] + ins, // либо добавили 
                    dp[i][j - 1] + del // либо удалили
                });
    return dp[n][m];
}