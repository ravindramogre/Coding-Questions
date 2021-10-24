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
		int n;
		cin>>n;
		int c1=0, c2=0;
		int x;
		if(n%3==0)x=n/3;
		else x=(n/3)+1;
		c1=x;
		c2=x;
		int val=c1+(2*c2);
		if(val-1==n){
			c1--;
			cout<<c1<<" "<<c2<<endl;
		}
		else if(val==n)cout<<c1<<" "<<c2<<endl;
		else{
			c2--;
			cout<<c1<<" "<<c2<<endl;
		}
	}
	return 0;
}