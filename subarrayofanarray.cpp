#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>subarrays(vector<int>v,int ind)
{
    if(ind==v.size())
    {
        return {{}};
        /*vector<vector<int>>finalans;
        vector<int>v;
        v.push_back({});
        finalans.push_back(v);
        return finalans;*/
    }

    vector<vector<int>>temp=subarrays(v,ind+1);
    
    vector<vector<int>>finalans;
   for(int i=0;i<temp.size();i++)
   {
    vector<int>ans;
    for(int j=0;j<temp[i].size();j++)
    {
             ans.push_back(temp[i][j]);
    }
    finalans.push_back(ans);
   }
  for(int i=0;i<temp.size();i++)
   {
    vector<int>ans;
    ans.push_back(v[ind]);
    for(int j=0;j<temp[i].size();j++)
    {
             ans.push_back(temp[i][j]);
    }
    finalans.push_back(ans);
   }
   return finalans;

    // 20 30 40 50
}
int main()
{
    vector<int>v={10,20,30};
    vector<vector<int>>ans=subarrays(v,0);
    for(int i=0;i<ans.size();i++)
   {
 
    for(int j=0;j<ans[i].size();j++)
    {
             cout<<ans[i][j]<<" ";
    }
   cout<<"\n";


   
   }
}