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
	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];
	int i=0;
	int gr=0;
	while(i<n-1){
		while(i<n-1 && (a[i]==a[i+1])){
			i++;
			continue;
		}
		gr++;
		i++;
		if(i==n-1 && a[i]!=a[i+1])gr++;
	}
	if(n==1)cout<<1;
	else cout<<gr;
	return 0;
}