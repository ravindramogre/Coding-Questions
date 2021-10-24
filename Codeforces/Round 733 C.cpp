#include<bits/stdc++.h>
using namespace std;

#define ll long long
void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
const ll N = 1e7+7;
ll pA[N];
ll pB[N];
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll A[n], B[n];
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		for(ll i=0; i<n; i++){
			cin>>B[i];
		}
		ll x=n;
		sort(A,A+n);
		sort(B,B+n,greater<int>());

		// prefix sum
		pA[0]=A[0];
		pB[0]=B[0];
		for(ll i=1; i<n; i++){
			pA[i]=pA[i-1]+A[i];
			pB[i]=pB[i-1]+B[i];	
		}
		ll ans=0;
		while(pA[n-1]-pA[n/4-1]<pB[n-n/4-1]){
			ans++;
			pA[n]=pA[n-1]+100;
			pB[n]=pB[n-1];
			n++;
		}
		cout<<ans<<endl;
	}
	return 0;
}