#pragma once
#include <vector>

using namespace std;

int MaxKSegmentSum(int k, vector<int> v) {
    int cur_sum = 0;
    int best_sum = 0;
    for (int i = 0; i < min((int)v.size(), k); ++i) {
        cur_sum += v[i];
    }
    if (k >= v.size()) {
        return cur_sum;
    }
    best_sum = cur_sum;
    for (int i = k; i < v.size(); ++i) {
        cur_sum += v[i];
        cur_sum -= v[i - k];
        best_sum = max(best_sum, cur_sum);
    }
    return best_sum;
}

int MaxSubstringWithoutRepetition(string s) {
    int n = s.size();
    int best_length = 0;
    bool in_window[26];

    int left = 0;
    for (int right = 0; right < n; ++right) {
        while (in_window[s[right] - 'a']) {
            in_window[s[left] - 'a'] = false;
            left++;
        }
            
        in_window[s[right] - 'a'] = true;
            
        best_length = max(best_length, right - left + 1);
    }
    return best_length;
}