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
	//previous approach
	/*while(1){
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
	}*/

	//modified approach
	for(int i=n+1;;i++){
		bool flag=true;
		bool c[10];
		memset(c,0,sizeof(c));
		int x=i;
		while(x!=0){
			if(c[x%10])flag=false;
			c[x%10]=true;
			x/=10;
		}
		if(flag){cout<<i<<endl; break;}
	}
	return 0;
}