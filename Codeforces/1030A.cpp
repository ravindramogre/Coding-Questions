#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void check(bool c[],int n){

	for(int i=0; i<n; i++){
		cin>>c[i];
		if(c[i]==1){
			cout<<"HARD";
			return;
		}
	}
	cout<<"EASY";
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int n;
	cin>>n;
	bool c[n];
	check(c, n);
	return 0;
}