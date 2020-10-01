#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    int c;
    for(int i=0;i<t;i++){
            cin>>a>>b;
        c=b-a;
        if(c>0){
            if(c%2!=0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        if(c<0)
            if(c%2==0){
                cout<<"1"<<endl;
        }
        else{

            cout<<"2"<<endl;
        }
        if(c==0)
            cout<<"0"<<endl;

   }
    return 0;
}
