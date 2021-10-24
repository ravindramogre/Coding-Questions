#include<iostream>
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
	init_code();
	int t;
	cin>>t;
	while(t--)
	{	
		int N;
		cin>>N;
		int a=N;
		int first;
		while(N!=0)
		{	
			first=N%10;
			N/=10;
		}
		cout<<first+a%10<<endl;
	}
	return 0;
}