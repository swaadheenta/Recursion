#include<bits/stdc++.h>
using namespace std;

void displayanarrayinreverse(int a[],int ind,int l)
{
    if(ind==l)
    {
              return ;
    }

     
     displayanarrayinreverse(a,ind+1,l);
     cout<<a[ind]<<" ";
};
int main()
{
   int a[]={10,20,30,40,50};
   displayanarrayinreverse(a,0,5);
}