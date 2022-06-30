#include<bits/stdc++.h>
using namespace std;

int lastocc(int a[],int ind,int l,int val)
{
    if(ind==l)
    {
              return -1;
    }
   
   int val1= lastocc(a,ind+1,l,val);
   if(val1==-1)
   {
    if(a[ind]==val)return ind;
    else return -1;
   }
   else
   return val1;

    
};
int main()
{
   int a[]={10,20,50,40,30,50,40,60};
   cout<<lastocc(a,0,8,40);
}