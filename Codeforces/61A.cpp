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
	string s,t;
	cin>>s>>t;
	string r;
	for(int i=0; i<s.length(); i++){
		if(s[i]==t[i])r.push_back('0');
		else r.push_back('1');
	}
	cout<<r;
	return 0;
}