#include<bits/stdc++.h>
using namespace std;
vector<int>temp;
vector<int> allindicesofanarray(vector<int>v,int val,int ind)
{
     if(ind==v.size())
     {
       return temp;

     }
     if(v[ind]==val)
     {
        temp.push_back(ind);
     }
      return allindicesofanarray(v,val,ind+1);
      

}
int main()
{
   vector<int>v ={10,20,30,40,50,30,30};
   vector<int>ans=allindicesofanarray(v,30,0);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}