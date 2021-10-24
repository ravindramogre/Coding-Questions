#include<bits/stdc++.h>
using namespace std;


void init_code()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

// n=10^6;
// t=10^5;
const int N=1e6+7;
int A[N];
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init_code();
	int t;
	cin>>t;
	for(int i=0; i<N; i++)
		A[i]=1;
	A[0]=A[1]=0;
	for(int i=2; i*i<=N; i++)
	{
		for(int j=i*i; j<N; j+=i)
			A[j]=0;
	}
	while(t--)
	{
		int n;
		cin>>n;
		if(A[n])
			cout<<"yes"<<endl;
		else 
			cout<<"no"<<endl;
	}
	return 0;
}