#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
	int n;
	cin>>n;
	int length;
	ll a[n];
	memset(a,0,sizeof(a));
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int Mx=1;
	int i=0;
	while(i<n-1){
		length=1;
		while(a[i+1]>=a[i] && i<n-1){
			length++;
			i++;
		}
		if(length>Mx)Mx=length;
		i++;
	}
	cout<<Mx;
	return 0;
}