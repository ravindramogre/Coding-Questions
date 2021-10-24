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
	int tt;
	cin>>tt;
	while(tt--){
		int n;
		cin>>n;
		int Max=(int) -2e9;
		int val=0;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			Max=max(Max,a);
			val=max(val,Max-a);
		}
		long long int x=0;
		while((1LL << x) - 1 < val){
			x++;
		}
		cout<<x<<endl;
	}
	return 0;
}