#include<bits/stdc++.h>
using namespace std;

int maxofarray(int a[],int ind,int l)
{
    if(ind==l-1)
    {
              return a[ind];
    }

     
    int val1=maxofarray(a,ind+1,l);
    return max(val1,a[ind]);

    
};
int main()
{
   int a[]={10,20,50,40,30};
   cout<<maxofarray(a,0,5);
}