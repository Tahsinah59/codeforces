#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a,a+n);
        int c=0;
        for(int i=0;i<n-1;i++){

            if((a[i+1]-a[i])<=1){
                c++;
            }
        }
        //cout<<c<<endl;

        if(c==n-1||n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
