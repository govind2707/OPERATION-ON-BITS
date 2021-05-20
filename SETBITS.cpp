#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,set=0;
    cout<<"enter num";
    cin>>n;
    while(n!=0)
    {
       
        if(n&1==1)
        {
            set++;
        }
        n=n>>1;
    }
    cout<<"set bits "<<set <<endl;
}