#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

//const int N=1e7+10;
//int A[N];


int main()
{
	init_code();
	int t;
	cin>>t;
	while(t--)
	{
		long long int D,d, P,Q, sum=0;
		cin>>D>>d>>P>>Q;
		
		sum += ((D/d)*(2*P + (D/d - 1)*Q)*d)/2;

		if(D%d!=0)
		{
			sum+=(D%d)*(P+(D/d)*Q);
		}
		cout<<sum<<endl;
	}
	return 0;
}