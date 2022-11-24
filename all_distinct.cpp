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
        set <int> s;
        for(int i=0; i<n; i++){
            cin>>a[i];

            s.insert(a[i]);

        }
       int ans = (int)s.size();
       if(n%2!=ans%2) ans--;

        cout<<ans<<endl;

    }
    return 0;
}
