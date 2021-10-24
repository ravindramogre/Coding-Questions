#include<bits/stdc++.h>
using namespace std;

#define ll long long
void init_code(){
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
	int tt;
	cin>>tt;
	while(tt--){
		int n;
		cin>>n;
		ll a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		ll Mx=0;
		int k;
		for(int i=0; i<n-1; i++){
			Mx=max(Mx,a[i]*a[i+1]);
		}
		cout<<Mx<<endl;
	}
	return 0;
}