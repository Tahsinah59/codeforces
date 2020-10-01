#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   }
   sort(ar,ar+n);
    if(n%2==0)
        cout<<ar[n/2-1]<<endl;
    else
        cout<<ar[n/2]<<endl;

   return 0;
}
