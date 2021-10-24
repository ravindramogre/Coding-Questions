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
		int A[n];
		int i=0;
		while(i<n){
			cin>>A[i];
			i++;
		}
		int min=INT_MAX;
		for(i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++)
			if((A[i]&A[j])^(A[i]|A[j])<min)
				min=(A[i]&A[j])^(A[i]|A[j]);
		}
		cout<<min<<endl;
	}
	return 0;
}