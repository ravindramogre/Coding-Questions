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
	ll sum;
	ll x=n/2;
	if(n%2==0)
		sum=x;
	else
		sum=x-n;
	cout<<sum;
	return 0;
}