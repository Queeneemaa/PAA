#include <stdio.h>

int main() {
    int dp[31] = {0};
    
    dp[0] = 1; 
    dp[2] = 3; 
    for (int i = 4; i <= 30; i += 2) {
        dp[i] = 4 * dp[i - 2] - dp[i - 4];
    }

    int n;
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;

        if (n % 2 == 0) {
            printf("%d\n", dp[n]);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
