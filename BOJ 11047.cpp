//BOJ 11047 동전0
#include<iostream>
#include<string>
using namespace std;

int N,K,ans;
int arr[12];

int main(void)
{
	cin>>N>>K;
	for(int i =1;i<=N;i++)
	{
		cin>>arr[i];
	}

	while(K!=0)
	{
		if(K>=arr[N])
		{
			int moks = 0;
			moks = K/arr[N];
			K = K-arr[N]*moks;
			ans += moks;
		}
		else
			N = N-1;
	}
	cout<<ans<<'\n';
	return 0;
}

