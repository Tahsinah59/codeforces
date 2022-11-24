#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int a,b,x,y,z;
    for(int i=0;i<t;i++){
        cin>>a>>b;

        x=(a+b)/3;
        y=min(a,b);
        z=min(x,y);
        cout<<z<<endl;
    }
    return 0;
}
