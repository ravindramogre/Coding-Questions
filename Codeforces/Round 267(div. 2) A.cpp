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
	int n;
	cin>>n;
	int ct=0;
	for(int i=0; i<n; i++){
		int p,q;
		cin>>p>>q;
		if(q-p>=2)ct++;
	}
	cout<<ct;
	return 0;
}