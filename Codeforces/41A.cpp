#include<iostream>
#include<string.h>
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
    string s,t;
    cin>>s>>t;
    int n=s.length();
    char u[n];
    for(int i=0; i<n; i++)
    {
        u[i]=s[n-1-i];
    }
    u[n]='\0';
    if(t==u)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}