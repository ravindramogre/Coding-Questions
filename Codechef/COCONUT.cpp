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
		int x,y,X,Y;
		cin>>x>>y>>X>>Y;
		int sum=0;
		if(X%x==0)
			sum+=X/x;
		else
			sum+=X/x + 1;
		if(Y%y==0)
			sum+=Y/y;
		else
			sum+=Y/y + 1;
		cout<<sum<<endl;
	}
	return 0;
}