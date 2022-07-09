

#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> findsubsets(vector<int>a,int n,int ind)
    {
        if(ind==n)
        {
            return {{}};
        }
                
vector<vector<int>>ans=findsubsets(a,n,ind+1);
        
        vector<vector<int>>finalans;
        
        for(int i=0;i<ans.size();i++)
        {
            vector<int>temp;
           
            for(int j=0;j<ans[i].size();j++)
            {
                temp.push_back(ans[i][j]);
            }
            finalans.push_back(temp);
            temp.push_back(a[ind]);
            finalans.push_back(temp);
        }
        return finalans;      
        
    }
vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>temp;
        vector<vector<int>>finalans=findsubsets(arr,N,0);
        for(vector<int>i:finalans )
        {
            int sum=0;
            for(auto x:i)
            {
                sum+=x;
            }
            temp.push_back(sum);
            
        }
        return temp;
       
    }

int main()
{
    
    vector<int>v={5,2,1};
          vector<int>ans=subsetSums(v,3);
          for(auto x:ans)cout<<x<<" ";
}