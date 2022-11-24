#include<stdio.h>
using namespace std;

int main()
{
    int x;
    scanf("%d",&x);
    int n;
    n=x/5;
    if(x%5!=0){
        n=n+1;
    }
    printf("%d\n",n);
    return 0;
}
