#include<bits/stdc++.h>

using namespace std;

long long fv[200002];

int main()
{
    long long n , x,a[200002],k=0,k1=0;

    cin >> n ;

      for(int i = 0 ; i < n ; i++ )
      {
          cin>>x;
          a[i]=x;

          if(!fv[x]){
            fv[x]++;
            k++;
          }
      }

      int ok=0;
      for(int i = n-1 ; i>= 0 && !ok;i--)
        {
             if(fv[a[i]]){
               fv[a[i]]--;
                k1++;
          }
            if(k1==k){
                cout<<a[i];
                ok=1;
            }
        }
}
