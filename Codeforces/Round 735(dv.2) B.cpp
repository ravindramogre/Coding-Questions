#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n+1];
		memset(a,0,sizeof(a));
		ll Max=INT_MIN;
		for(ll i=1; i<=n; i++)cin>>a[i];
		for(ll i=max((ll) 1, n-100); i<=n-1; i++){
			for(ll j=i+1; j<=n; j++)
			if((i*j-k*(a[i]|a[j]))>Max)Max=i*j-k*(a[i]|a[j]);
		}
		cout<<Max<<endl;
	}
	return 0;
}