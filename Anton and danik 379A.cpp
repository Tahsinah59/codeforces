#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n+1];

    int a=0,d=0;
    for(int i=0;i<n;i++){
             cin>>s[i];
        if(s[i]=='A')
            a++;
        if(s[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton\n");
    else if(a<d)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;

}
