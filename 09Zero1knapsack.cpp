#include<bits/stdc++.h>
using namespace std;
int knapsack(int profits[], int weights[], int capacity, int n) {
    int table[n+1][capacity+1];
    memset(table, 0, sizeof(table));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= capacity; j++) {
            if (weights[i-1] <= j) {
                table[i][j] = max(profits[i-1] + table[i-1][j-weights[i-1]], table[i-1][j]);
            } else {
                table[i][j] = table[i-1][j];
            }
        }
    }
    return table[n][capacity];
}
int main() {
    int profits[] = {11, 21, 31, 33};
    int weights[] = {2, 11, 22, 15};
    int capacity = 40;
    int n = 4;
    int max_profit = knapsack(profits, weights, capacity, n);
    cout << "Maximum Profit: " << max_profit << endl;
    return 0;
}
