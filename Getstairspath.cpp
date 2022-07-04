// you can take either 1,2 or 3 jumps at a time and you have to reach the ground.
// find the no. of ways to do it !!
#include<bits/stdc++.h>
using namespace std;
vector<vector< int>>findpaths(int n)
{
  //  suppose n=3
    // 1 1 1
    // 1 2
    if(n==0)
    {
        return {{}};
       /* vector<vector<int>>temp;
        vector<int>v;
        v.push_back({});
        temp.push_back(v);
        return temp;*/
    }
    if(n<0)
    {
         vector<vector<int>>temp;
       /* vector<int>v;
        v.push_back({});
        temp.push_back(v);*/
        return temp;
    }
    // take 1 step !!
     vector<vector<int>>temp1= findpaths(n-1);
   /*  cout<<n<<" ";
     for(int i=0;i<temp1.size();i++)
     {
        for(int j=0;j<temp1[i].size();j++)
        {
            cout<<temp1[i][j]<<" ";
        }
        cout<<"\n";
     }*/
     vector<vector<int>>temp2= findpaths(n-2);
     vector<vector<int>>temp3= findpaths(n-3);
     vector<vector<int>>finalans;
     for(int i=0 ;i<temp1.size();i++)
     {
        vector<int>v;
        v.push_back(1);
       for(int j=0;j<temp1[i].size();j++)
       {
          v.push_back(temp1[i][j]);
       }
        finalans.push_back(v);
     }
      
     for(int i=0 ;i<temp2.size();i++)
     {
        vector<int>v;
        v.push_back(2);
       for(int j=0;j<temp2[i].size();j++)
       {
          v.push_back(temp2[i][j]);
       }
        finalans.push_back(v);
     }
     for(int i=0 ;i<temp3.size();i++)
     {
        vector<int>v;
        v.push_back(3);
       for(int j=0;j<temp3[i].size();j++)
       {
          v.push_back(temp3[i][j]);
       }
        finalans.push_back(v);
     }
     return finalans;
}

int main()
{
   int n;
   cin>>n;
   vector<vector<int>>ans=findpaths(n);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
   }
}