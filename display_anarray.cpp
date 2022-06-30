#include<bits/stdc++.h>
using namespace std;

void displayanarray(int a[],int ind,int l)
{
    if(ind==l)
    {
              return ;
    }

     cout<<a[ind]<<" ";
     displayanarray(a,ind+1,l);
};
int main()
{
   int a[]={10,20,30,40,50};
   displayanarray(a,0,5);
}