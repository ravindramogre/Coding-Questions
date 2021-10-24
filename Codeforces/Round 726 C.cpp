#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
const int N = 200007;
int h[N];
int main()
{
	init_code();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 

		for(int i=0; i<n; i++)
		{
			cin>>h[i];
		}
		sort(h, h+n);
		int min= INT_MAX;
		int gr,sm;
		for(int i=0; i<n-1; i++)
		{
			if(h[i+1]-h[i] < min)
				{
					min=h[i+1]-h[i];
					gr=i+1;
					sm=i;
				}
		}
		if(n==2)
			cout<<h[0]<<" "<<h[1];
		else
		{
			for(int i=gr; i<n; i++)
				cout<<h[i]<<" ";
			for(int i=0; i<gr; i++)
				cout<<h[i]<<" ";
		}
		cout<<endl;
	}
}