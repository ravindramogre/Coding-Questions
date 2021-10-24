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
		long long n,k;
		cin>>n>>k;
		string str,str1;
		cin>>str;
		str1=str;
		long long i=0;
		while(i<n){
			string s;
			if(str[i]=='1' && i>0 && str[i-1]!='1')
				s=str.substr(i,n-i) + str.substr(0,i);
			if(s>str1){
				str1=s;
			}
			i++;
		}
		string str2=str+str;
		string str3;
		vector <long long> Mx;
		for(long long i=0; i<n; i++){
			str3=str2.substr(i,n);
			if(str3==str1)
				Mx.push_back(i);
		}
		//cout<<"hello";
	 	long long ct=Mx.size();
		i=k/ct;
		else if(k%ct==0 && i>=1)
			cout<<(i-1)*n + Mx[ct-1]<<endl;
		else
			cout<<i*n + Mx[k%ct-1]<<endl;
	}
	return 0;
}