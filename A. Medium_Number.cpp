#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a>b && b>c || a<b && b<c)
            cout<<b<<endl;
        if(b>c&&c>a || b<c && c< a)
            cout<<c<<endl;
        if(c>a&& a>b || c<a && a<b)
            cout<<a<<endl;

    }
    return 0;
}
