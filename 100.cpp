#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x[10000];
    while(cin>>a>>b)
    {
        int c=1;
        for(int i=a;i<=b;i++)
        {

          if(i==1)
            c=c;
          else if(i>1)
          {
              while(i>1)
              {
               if(i%2==0)
               {
                   i=i/2;
                   c++;
               }
               else
               {
                   i=3*i+1;
                   c++;
               }
              }
          }
          x[i]=c;
          c=1;
           cout<<x[i]<<" ";
        }
       // int maxi=x[a];
        // for(int j=a;j<=b;j++)
        //{
          //  if(x[j]>maxi)
             //   maxi=x[j];
       // }

       // cout<<a<<" "<<b<<" "<<maxi<<endl;
    }

    return 0;
}
