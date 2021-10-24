#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int checker(int a[], int n){
	int evenCt=0,oddCt=0;
	for(int i=1; i<=n; i++){
		if(a[i]%2==0)evenCt++;
		else oddCt++;
	}
	if(oddCt==1){
		for(int i=1; i<=n; i++){
			if(a[i]%2!=0)return i;
		}
		return 1;
	}
	else{
		for(int i=1; i<=n; i++){
			if(a[i]%2==0)return i;
		}
		return 1;
	}
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	cout<<checker(a,n);
	return 0;
}
