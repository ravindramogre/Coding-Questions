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
		int n;
		cin>>n;
		string s;
		char a='a';
		int x=1;
		for(int i=0; i<n; i++){
			if(i<26){
				s.push_back(a);
				a++;
				continue;
			}
			x++;
				a='a';
				while(x--){
					s.push_back(a);
				}
	
		}
		cout<<s<<endl;
	}
	return 0;
}