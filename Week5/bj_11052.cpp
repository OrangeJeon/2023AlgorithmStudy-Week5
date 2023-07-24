#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int dp[1001];
int main() {
	int n;
	cin >> n;
	cin >> dp[1];
	for (int i = 2; i <= n; i++) {
		cin >> dp[i];
		for (int j = 1; j < i; j++) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
		}
	}
	printf("%d", dp[n]);

	return 0;
}
