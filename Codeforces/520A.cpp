#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void checker(string s){
	bool flag[123];
	memset(flag,0,sizeof(flag));
	for(int i=0; i<s.length(); i++){
		flag[s[i]]=1;
	}
	for(int i=65; i<=90; i++){
		if(flag[i]==0 && flag[i+32]==0){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int n;
	cin>>n;
	string s;
	cin>>s;
	checker(s);
	return 0;
}