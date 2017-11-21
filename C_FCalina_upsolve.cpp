#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m,s,p=1;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        p*=2;
    s=(n-m)*100+1900*m;
    s*=p;

    cout<<s;
}
