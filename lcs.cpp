#include <iostream>
#include <string>
using namespace std;

string A, B;
int dp[1005][1005];

int main() {
    cin >> A >> B;
    int m = A.length(), n = B.length();

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << "Length of LCS: " << dp[m][n] << endl;
    return 0;
}
