#include<iostream>
#include<algorithm>
using namespace std;

int N, sum=0, p=0;
int P[1001];

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> P[i];
	}
	sort(P, P + N);
	for (int i = 0; i < N; i++)
 		sum += P[i]*(N-i);

	printf("%d", sum);
	return 0;
}