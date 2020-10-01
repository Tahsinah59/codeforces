#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int x=0;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];

        if(ar[i]<=h)
            x=x+1;
        else
            x=x+2;
    }
    cout<<x<<endl;
    return 0;
}

