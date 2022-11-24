#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,d;
        int x,y,z;
        int ct=0;
        cin>>a>>b>>c>>d;
        x=b-a;
        y=c-a;
        z=d-a;
        if(x>0){ct++;}
        if(y>0){ct++;}
        if(z>0){ct++;}

        cout<<ct<<endl;
    }

    return 0;
}
