#include <bits/stdc++.h>
using namespace std;

int countWays(vector<int>& coins, int sum) {
    vector<int> dp(sum + 1, 0);

    // One way to make sum 0: choose nothing
    dp[0] = 1;

    for (int coin : coins) {
        for (int j = coin; j <= sum; j++) {
            dp[j] += dp[j - coin];
        }
    }

    return dp[sum];
}

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 4;

    cout << countWays(coins, sum) << endl;

    return 0;
}
