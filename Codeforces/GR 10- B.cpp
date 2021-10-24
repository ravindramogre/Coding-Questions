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
	int tt;
	cin>>tt;
	while(tt--){
		int n;
		cin>>n;
		vector<vector<int>> a(n, vector<int>(5));
		for(int i=0; i<n; i++){
			for(int j=0; j<5; j++)
				cin>>a[i][j];
		}
		vector<vector<int>> b(n, vector<int>(n-1));
		for(int i=0; i<n; i++){
			
		}			
	}
	return 0;
}