#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,res;
    cin>>n;
    if(n%4==0 ||n%7==0 ||n%47==0 ||n%74==0 || n%447==0 || n%474==0 || n%774==0 || n%747==0 || n%477==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
