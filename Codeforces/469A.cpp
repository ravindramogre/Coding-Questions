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

void checker(int n){
	bool flag[n+1];
	int p,q;
	memset(flag,0,sizeof(flag));
	cin>>p;
	for(int i=0; i<p; i++){
		int a;
		cin>>a;
		flag[a]=1;
	}
	cin>>q;
	for(int i=0; i<q; i++){
		int a;
		cin>>a;
		flag[a]=1;
	}
	for(int i=1; i<=n; i++){
		if(!flag[i]){cout<<"Oh, my keyboard!";
		return;}
	}
	cout<<"I become the guy.";
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int n;
	cin>>n;
	checker(n);
	return 0;
}