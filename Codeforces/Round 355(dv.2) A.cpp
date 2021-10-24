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
	int n,h;
	cin>>n>>h;
	int a[n];
	int width=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]>h)width+=2;
		else width++;
	}
	cout<<width;
	return 0;
}