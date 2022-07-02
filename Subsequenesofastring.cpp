#include<bits/stdc++.h>
using namespace std;
vector<string>getsubseq(string str)
{
    if(str.size()==0)
    {
        vector<string>temp;
        temp.push_back("");
        return temp;
    }
      char c=str[0];
      string res=str.substr(1);
     // cout<<res<<"\n";
      vector<string>ans=getsubseq(res);
      vector<string>finalans;
      for(string temp:ans)
      {
        //string s1=c+temp ,s2=c+"";
        //cout<<s1<<" "<<s2<<" ";
            finalans.push_back(c+temp);
            finalans.push_back(""+temp);
      }
     // cout<<"\n";
      return finalans;

}
int main()
{
  string str;
  cin>>str;
  vector<string>ans=getsubseq(str);
  for(auto temp:ans)
  {
    cout<<temp<<" ";
  }
}