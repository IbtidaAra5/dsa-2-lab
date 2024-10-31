#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n, vector<int>& dp) {
    if (n <= 1) {
        dp[n] = n;
        return n;
    }

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp[n];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << "Fib(" << n << "): " << fibonacci(n, dp) << endl;

    return 0;
}
