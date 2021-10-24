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
    int l;
    cin>>l;
    char ch[l];
    for( int i=0; i<l; i++)
    {
        cin>>ch[i];
    }
    int D=0,A=0;
    for(int i=0; i<l; i++)
    {
        if(ch[i]=='D')
            D++;
        else if(ch[i]=='A')
            A++;
    }
    if(D>A)
        cout<<"Danik"<<endl;
    else if(D<A)
        cout<<"Anton"<<endl;
    else 
        cout<<"Friendship"<<endl;
}