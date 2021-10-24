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
	string h="I hate";
	string l="I love";
	string t="that";
	for(int i=1; i<=n; i++){
		if(i%2==0) cout<<l<<" ";
		else cout<<h<<" ";
		if(i+1<=n)cout<<t<<" ";
	}
	cout<<"it";
	return 0;
}