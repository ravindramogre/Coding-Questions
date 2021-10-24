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
		int n,k=0;
		cin>>n;
		string s;
		cin>>s;
		int l=s.size();
		string t=s;
		sort(s.begin(), s.end());
		for(int i=0; i<l; i++){
			k+=(s[i]!=t[i]);
		}
		cout<<k<<endl;
	}
	return 0;
}