#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int compare(int a, int b)
{
	return a > b;
}

int main()
{
	int ans = 0, N, K;
	

	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0; i <N; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end(), compare);

	for (int i = 0; i < N; i++)
	{
		while (K - A[i] >= 0)
		{
			ans++;
			K -= A[i];
		}
	}
	printf("%d\n", ans);
}