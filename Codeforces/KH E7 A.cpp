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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int total=0;
		for(int i=0; i<n; i++)
		{
			int l,r;
			cin>>l>>r;
			if(k>=l && k<=r)
			{
				if(r-k>=total)
					total=r-k+1;
			}
		}
		cout<<total<<endl;
	}
	return 0;
}