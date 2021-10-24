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
	int h[100], a[100];
	for(int i=0; i<n; i++){
		cin>>h[i]>>a[i];
	}
	int games=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(h[i]==a[j])games++;
		}
	}
	cout<<games;
	return 0;
}