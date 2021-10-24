#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
const int N=1e5+7;
const int M=1e9+5;
long long x[N];
long long y[N];
int main()
{
	init_code();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>x[i]>>y[i];
		}
		long long xmin = M, xmax = 0, ymin = M, ymax = 0;

		for(int i=0; i<n; i++)
		{
			if(x[i]>xmax)
			xmax=x[i];
			if(x[i]<xmin)
			xmin=x[i];
			if(y[i]>ymax)
			ymax=y[i];
			if(y[i]<ymin)
			ymin=y[i];
		}
		
		long long areaor=(xmax-xmin)*(ymax-ymin); // area of rectangle
		sort(x,x+n);
		sort(y,y+n);

		long long sidex=0, sidey=0; // max sides of rectangle in x direction and y direction respectively

		for(int i=0; i<n-1; i++)
		{
			if(x[i+1]-x[i]>sidex)
				sidex=x[i+1]-x[i];
			if(y[i+1]-y[i]>sidey)
				sidey=y[i+1]-y[i];
		}

		// in x direction
		//area to be substracted = areax
		long long areax= sidex*(ymax-ymin);

		//in y direction - area to be substracted = areay
		long long areay=sidey*(xmax-xmin);

		//required area
		if((areaor-areax)>(areaor-areay))
			cout<<areaor-areay<<endl;
		else 
			cout<<areaor-areax<<endl;
	}
	return 0;
}