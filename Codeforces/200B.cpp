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
	double a[n];
	double sum=0;
	memset(a,0,sizeof(a));
	for(int i=0; i<n; i++){cin>>a[i];sum+=a[i];}
	double average=sum/n;
	cout<<fixed<<setprecision(6)<<average;
	return 0;
}