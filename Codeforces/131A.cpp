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
	string s;
	cin>>s;
	bool flag=true;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=97)flag=false;
	}
	bool flag1=false,flag2=false, flag3=true;
	if(s[0]>=97)flag2=true;
	for(int i=1; i<s.length(); i++){
		if(s[i]>=97)flag3=false;
	}
	if(flag2 && flag3)flag1=true;
	if(flag || flag1){
		for(int i=0; i<s.length(); i++){
			if(s[i]<=90)s[i]+=32;
			else s[i]-=32;
		}
	}
	//bool flag4=false;
	//for(int i=0; i<s.size(); i++)if()
	cout<<s;
	return 0;
}