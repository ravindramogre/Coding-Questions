#include<bits/stdc++.h>
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
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<n)
			cout<<"1"<<endl;
		else
		{
			cout<<sum-n<<endl;
		}
	}
}