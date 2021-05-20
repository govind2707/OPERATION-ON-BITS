#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the position to check wether set or not";
    cin>>p;
    if(n&(1<<(p-1)))
    cout<<"set bit"<<endl;
    else
    cout<<"unset"<<endl;
}
    