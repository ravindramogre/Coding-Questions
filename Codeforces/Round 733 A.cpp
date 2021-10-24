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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int max=0;
		//vector<int> v;
		while(n!=0){
			if(max<n%10)
				max=n%10;
			//v.push_back(n%10);
			n/=10;
		}
		//int ans=0;
		//for(int x: v){
		//	if(x>ans) ans=x;
		//}
		cout<<max<<endl;
	}
	return 0;
}