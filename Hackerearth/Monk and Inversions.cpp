#include<iostream>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main()
{
	init_code();
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int M[N][N];
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			cin>>M[i][j];
		}
		int ct=0;
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				for(int p=i; p<N; p++)
				{
					for(int q=j; q<N; q++)
					{
						if(M[i][j]>M[p][q])
						ct++;
					}
				}
			}
		}
		cout<<ct<<endl;
	}
	return 0;
}