#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void check(string s){
	for(int i=0; i<s.length(); i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			cout<<"YES";return;
		}
	}
	cout<<"NO";
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	string s;
	cin>>s;
	check(s);
	return 0;
}