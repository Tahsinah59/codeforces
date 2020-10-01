#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100+1];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;

        if(strlen(s)<=2)
            cout<<s<<endl;

        else{
        cout<<s[0];
        for(int j=1;j<strlen(s)-1;j+=2){
            printf("%c",s[j]);
        }
        cout<<s[strlen(s)-1];
        cout<<endl;
        }
    }
    return 0;
}

