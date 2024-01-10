#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=1;
    while(b)
    {
        if(b&1)
        {
            b-=1;
            res*=a;
        }
        else{
            b/=2;
            a=a*a;
        }
    }
    cout<<res;
}