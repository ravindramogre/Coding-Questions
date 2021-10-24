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
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0; i<m; i++)cin>>a[i];
	sort(a,a+m);
	int Min=INT_MAX;
	for(int i=0; i<m-n+1; i++){
		if(a[i+n-1]-a[i]<Min)Min=a[i+n-1]-a[i];
	}
	cout<<Min;
	return 0;
}