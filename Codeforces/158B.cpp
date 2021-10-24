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
	memset(a,0,sizeof(n));
	//key value pair
	map<int,int> g;
	for(int i=0; i<n; i++){
		cin>>a[i];
		g[a[i]]++;
	}
	int total=0;
	if(g[3]>g[1]){
		if(g[2]%2==0)
	 		total+=g[4]+g[3]+g[2]/2;
	 	else
	 		total+=g[4]+g[3]+g[2]/2 +1;
	}
	else{
		int a=g[1]-g[3];
		int b=a%2==0? abs(a/2-g[2]) : abs(a/2-g[2]) +1;
		total+=g[4]+g[3]+min(a/2,g[2])+(b%2==0?b/2 : b/2 +1);
	}
	cout<<total;
	return 0;
}