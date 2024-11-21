#include <stdio.h>

#define MOD 1000000007

int main() {
    int n;
    scanf("%d", &n);

    int dp[n + 1];
    dp[0] = 1; 

    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }

    printf("%d\n", dp[n]);
    return 0;
}
