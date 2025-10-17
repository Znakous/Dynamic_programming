#pragma once
#include <vector>
#include <algorithm>


using namespace std;

vector<int> weights;
vector<int> prices;

vector<vector<int>> cur_best;

void Precalc(int num_elements, int capacity) {
    cur_best = vector<vector<int>>(num_elements + 1, vector<int>(capacity + 1, 0));
    for (int i = 0; i < capacity + 1; i++) {
        cur_best[0][i] = 0;
    }
    for (int i = 0; i < num_elements + 1; i++) {
        cur_best[i][0] = 0;
    }
    for (int i = 0; i < num_elements; i++) {
        for (int j = 0; j < capacity + 1; j++) {
            if (j >= weights[i]) {
                cur_best[i + 1][j] = max(cur_best[i][j - weights[i]] + prices[i], cur_best[i][j]);
            } else {
                cur_best[i + 1][j] = cur_best[i][j];
            }
        }
    }
}

vector<pair<int, int>> elements;
void FindElements(int cur_ind, int cur_capacity) {
    if (cur_best[cur_ind][cur_capacity] == 0) {
        return;
    }
    if (cur_best[cur_ind - 1][cur_capacity] == cur_best[cur_ind][cur_capacity]) {
        FindElements(cur_ind - 1, cur_capacity);
    } else {
        elements.push_back({weights[cur_ind - 1], prices[cur_ind - 1]});
        FindElements(cur_ind - 1, cur_capacity - weights[cur_ind - 1]);
    }
}

void SolveKnapsack(int capacity) {
    Precalc(weights.size(), capacity);
    FindElements(weights.size(), capacity);
}