#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
void solve(){
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		for(int i=0; i<n; i++)cin>>a[i];
		for(int i=0; i<n; i++)cin>>b[i];
		int ans=0;
		a[n]=N;
		for(int i=0; i<n; i++){
			if(a[i]>b[0]){
				ans++;
				if(a[i+1]<b[0])break;
			}
		}
}
int main(){
	int tt;
	cin>>tt;
	while(tt--){
		solve();
	}
	return 0;
}
