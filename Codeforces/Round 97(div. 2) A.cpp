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
	int n;
	cin>>n;
	int a[n+1];
	int b[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=1; i<=n; i++){
		cout<<b[i]<<" ";
	}
	return 0;
}