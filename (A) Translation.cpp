#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    char t[101];
    int count_=0;
    cin>>s;
    cin>>t;

    for(int i=0,j=strlen(s)-1;i<strlen(s),j>=0;i++,j--){

            if(s[i]==t[j])
                count_++;

    }
    if(count_==strlen(s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
