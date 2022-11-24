#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int n;
    long long int x;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==1||n==2){
            x=0;
            cout<<x<<" ";
        }
        else if(n%2==0){
            x=n/2-1;
            cout<<x<<" ";
        }
        else
        {
            x=n/2;
            cout<<x<<" ";
        }

    }
    return 0;
}
