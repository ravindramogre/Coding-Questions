#include<bits/stdc++.h>
using namespace std;
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
	string s;
	getline(cin,s);
	bool flag[125];
	memset(flag, 0, sizeof(flag));
	for(int i=0; i<s.length(); i++){
		flag[s[i]]=1;
	}
	int ct=0;
	for(int i=97; i<=122; i++){
		if(flag[i]==1)
		ct++;
	}
	cout<<ct;
	return 0;
}