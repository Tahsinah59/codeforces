#include <stdio.h>


int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    int ans=0;
    while(1){
        if(n<k){
            ans=ans+n;
            break;
        }
        ans=ans+n-(n%k);
        n=(n%k)+(n/k);
    }
    printf("%d",ans);
    return 0;
}

