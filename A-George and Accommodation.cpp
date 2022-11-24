
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p,q;
    int count_=0;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(abs(p-q)>=2)
            count_++;
    }
    cout<<count_<<endl;
    return 0;
}
