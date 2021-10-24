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
	int tt;
	cin>>tt;
	while(tt--){
		int a,b;
		cin>>a>>b;
		if(a%b==0)cout<<0<<endl;
		else cout<<b-a%b<<endl;
	}
	return 0;
}