#include<bits/stdc++.h>
using namespace std;


int cap(char s[]){
     int u=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=91)
            u++;
        }
    return u;
}
int small(char s[]){
     int l=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i]>=97&&s[i]<=123)
            l++;
        }
   return l;
}

int main()
{
    char s[101];
    cin>>s;
    int x,y;
    x=cap(s);
    y=small(s);

    for(int i=0;i<strlen(s);i++){
        if(x>y && s[i]>96 && s[i]<123){
            s[i]=65+(s[i]-97);
        }


        if(x<=y && s[i]>64 && s[i]<92){
            s[i]=97+(s[i]-65);}

            cout<<s[i];

}
    return 0;
}

