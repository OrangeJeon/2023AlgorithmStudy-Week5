#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, w[100001], Max=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> w[i];
	}
	
	sort(w, w + N);
	for (int i = 0; i < N; i++)
	{
		Max = max(Max, w[i] * (N - i));
	}
	printf("%d", Max);
}