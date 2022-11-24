#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m,x,y;
    while(t--){
        cin>>n>>m;
        x=n*m;
        y=x/2;
        if(x==1)
            cout<<"1"<<endl;
        else if(x%2==0)
            cout<<y<<endl;
        else
            cout<<y+1<<endl;



    }
    return 0;
}

