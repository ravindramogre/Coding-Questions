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
	int a,b,c;
	cin>>a>>b>>c;
	int result=a+b+c;
	if((a+b)*c>result)result=(a+b)*c;
	if(a*(b+c)>result)result=a*(b+c);
	if(a*b*c>result)result=a*b*c;
	cout<<result;
	return 0;
}