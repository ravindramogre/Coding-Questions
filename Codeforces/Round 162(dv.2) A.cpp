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
	while(1){
		n++;
		bool cn=false;
		int x=n;
		int a[4];
		int i=0;
		while(x!=0){
			a[i]=x%10;
			i++;
			x/=10;
		}
		for(i=0; i<3; i++){
			for(int j=i+1; j<4; j++)
				if(a[i]==a[j])cn=true;
		}
		if(!cn){cout<<n<<endl;break;}
	}
	return 0;
}