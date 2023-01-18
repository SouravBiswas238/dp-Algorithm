#include <iostream>
#include <cstring>

using namespace std;

const int N = 105, M = 1005;

int n, m;
int w[N], v[N];
int dp[M];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];

    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
        }
    }
    cout << dp[m] << endl;
    return 0;
}
