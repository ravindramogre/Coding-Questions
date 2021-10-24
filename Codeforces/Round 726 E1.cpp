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
	init_code();
	//int n,k;
	//cin>>n>>k;
	string s;
	cin>>s;
	//int l=s.length();
	int sum=0;
	for(int i=0; i<6; i++)
	sum+=int(s[i]);
	cout<<sum;
	return 0;
}