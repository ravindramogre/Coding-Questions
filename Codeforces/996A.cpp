#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{	
	ll n;
	cin>>n;
	int ct=0;
	int dp[]={100,20,10,5,1};
	int i=0;
	while(n>0){
		ct+=n/dp[i];
		n%=dp[i];
		i++;
	}
	cout<<ct;
	return 0;
}
