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
		int a[n+1], b[n+1];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		for(int i=1; i<=n; i++){
			cin>>b[i];
		}
		//count
		int m=0;
		vector <vector<int>> x;
		bool possible=true;
		for(int i=1; i<=n; i++){
			int ct=0;
			int diff=a[i]-b[i];
			for(int j=i+1; i<=n; i++){
				vector<int> y;
				if(diff<0){
					if(a[j]>b[j]){
						a[j]--;
						ct++;
						y.push_back(i);
						y.push_back(j);
						x.push_back(y);
					}
				}
				else if(diff>0){
					if(a[j]<b[j]){
						a[j]++;
						ct++;
						y.push_back(i);
						y.push_back(j);
						x.push_back(y);
					}
				}
			}
			if(ct!=abs(diff))possible=false;
			m+=abs(diff);
		}
		for(int i=1; i<=n; i++){
			if(a[i]!=b[i]){
				possible=false;
				break;
			}
		}
		if(!possible)cout<<"-1"<<endl;
		else{
			cout<<m<<endl;
			for(int i=0; i<x.size(); i++){
				cout<<x[i][0]<<" "<<x[i][1];
			}	
		}
		
	}
	return 0;
}