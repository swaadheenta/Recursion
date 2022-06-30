#include<bits/stdc++.h>
using namespace std;

int firstocc(int a[],int ind,int l,int val)
{
    if(ind==l)
    {
              return -1;
    }

     if(a[ind]==val)
     {
        return ind;
     }
    return firstocc(a,ind+1,l,val);
    
    
};
int main()
{
   int a[]={10,20,50,40,30,50};
   cout<<firstocc(a,0,5,50);
}