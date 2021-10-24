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
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int a[]={k,l,m,n};
	//implementing sieve of eratosthenes
	bool flag[d+1];
	memset(flag,0,sizeof(flag));
	for(int i=0; i<4; i++){
		for(int j=a[i]; j<=d; j+=a[i]){
			flag[j]=1;
		}
	}
	int ct=0;
	for(int i=1; i<=d; i++){
		if(flag[i])ct++;
	}
	cout<<ct;
	return 0;
}