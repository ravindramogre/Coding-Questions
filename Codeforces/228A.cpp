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
	int a[4];
	int sum=0;
	//memset(a,0,sizeof(a));
	/*bool flag[7];
	memset(flag,0,sizeof(flag));
	int sum=0;
	for(int i=0; i<4; i++){
		cin>>a[i];
		if(!flag[a[i]])sum++;
		flag[a[i]]=1;
	}*/
	set<int> shoe;
	for(int i=0; i<4; i++){
		cin>>a[i];
		shoe.insert(a[i]);
	}
	cout<<4-shoe.size();
	return 0;
}