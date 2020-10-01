#include<bits/stdc++.h>
using namespace std;


int max4(long long int a,long long int b,long long int c,long long int d);

int main()
{
    long long int a,b,c,d;
    long long int y,p,q,r,s;
    cin>>a>>b>>c>>d;
    y=max4(a,b,c,d);
    p=y-a;
    q=y-b;
    r=y-c;
    s=y-d;
    if(p!=0)
        cout<<p<<" ";
    if(q!=0)
        cout<<q<<" ";
     if(r!=0)
        cout<<r<<" ";
    if(s!=0)
        cout<<s<<" ";
        cout<<endl;
    return 0;
}

int max4(long long int a,long long int b,long long int c,long long int d){
    long long int x;
    if(a>b){
        if(a>c){
            if(a>d){
                x=a;
                //cout<<x<<endl;
            }
            else{
                x=d;
               //cout<<x<<endl;
            }
        }
        else{
            if(c>d){
                x=c;
                //cout<<x<<endl;
            }
            else{
                x=d;
                //cout<<x<<endl;
            }

        }
    }
    else{
        if(b>c){
            if(b>d){
                x=b;
                //cout<<x<<endl;
            }
            else{
                x=d;
                //cout<<x<<endl;
            }
        }
        else{
            if(c>d){
                x=c;
                //cout<<x<<endl;
            }
            else{
                x=d;
                //cout<<x<<endl;
            }

        }
    }
    return x;
}
