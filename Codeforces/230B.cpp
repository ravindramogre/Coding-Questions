#include<bits/stdc++.h>
#define ll long long
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
	ll n;
	cin>>n;
	ll a[n];
	int ct;
	for(int i=0; i<n; i++)cin>>a[i];
	for(int i=0; i<n; i++)
	{	
		ct=0;
		for(int i=1; i<=a[i]; i++){
			if(a[i]%i==0)ct++;
		}
		if(ct==3)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}