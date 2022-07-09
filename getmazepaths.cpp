//find all paths from (0,0) to (n,n)
#include<bits/stdc++.h>
using namespace std;
vector<string>findmazepaths(int i,int j,int n)
{
    if(i==n-1 && j==n-1)
    {
        vector<string>temp;
        temp.push_back(" ");
        return temp;
    }
   vector<string>hpath,vpath;
if(j<n-1) hpath=findmazepaths(i,j+1,n);
 
if(i<n-1)
vpath=findmazepaths(i+1,j,n);

vector<string>finalans;
 for(auto x:hpath)
 {
  
     finalans.push_back("h"+x);
 }

 for(auto x:vpath)
 {
  
     finalans.push_back("v"+x);
 }
 return finalans;


}
int main()
{
    int n;
    cin>>n;
   
    vector<string> finalans=findmazepaths(0,0,n);
    for(auto x:finalans)cout<<x<<" ";
   
}