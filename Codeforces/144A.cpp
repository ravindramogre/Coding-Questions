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
	int h[n+1] ,posMx=0, posMin=101;
	for(int i=1; i<=n; i++)cin>>h[i];
	for(int i=2; i<=n; i++){
		if(h[i]>h[1]){
			posMx=i;
		}
		if(h[i]<=h[1])posMin=i;
	}
	if(posMx>posMin)cout<<posMx-1+n-posMin-1;
	else cout<<posMx-1+n-posMin;
	return 0;
}