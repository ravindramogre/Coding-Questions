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
		int n,k;
		cin>>n>>k;
		int A[n];
		unordered_map<int, int> M(0);
		for(int i=0; i<n; i++){
			cin>>A[i];
			M[A[i]]++;
		}
		int Mxpart=n/k;
		int c[n], cct=0;
		for(int i=0; i<n/k; i++){
			M[M[i].first]--;
			c[n-i-1]= ++cct;
		}
	}
	return 0;
}