#include<bits/stdc++.h>
using namespace std;
vector<string> getkeypadcombinations(string inp,string str[],int ind)
{
    if(ind==inp.size()-1)
    {
        
        vector<string>v;
         char c=inp[ind]; // suppose inp=123 char c=1;
        
    string temp=str[c-'0'];
 
        for(int i=0;i<temp.size();i++)
        {
          
            string val="";
            val+=temp[i];
           
            v.push_back(val);
        }
        return v;
     

    }
    char c=inp[ind]; // suppose inp=123 char c=1;
    string temp=str[c-'0'];  //temp="abc";
    vector<string>v=getkeypadcombinations(inp,str,ind+1);// here faith is "23" will me 
                                                         // give all combinations after this I have to just
                                                         //combine all of the with all the character present in 
           
           vector<string>ans; 
           int j=0; 
                                              // 1 of string str
    for(int i=0;i<temp.size();i++) 
    {  
       char s1=temp[i] ;    // starting with a
        for(int j=0;j<v.size();j++)  // ghi
        {
                 string s2=v[j] ; // suppose dg
                string val=s1+s2;
                ans.push_back(s1+s2); 
        }
                                           // suppose for 23 I got
                                          //    {  dg,dh,di eg,eh,ei,fg,fh,fi }
                                          // now I will combine all of this with a,b, and c
    }
    return ans;
}
int main()
{
    string input;
    cin>>input;
    string s[]={"?!","abc","def","ghi","jkl","mnop","qrst","uv","wxyz",".;"};
     vector<string>ans=getkeypadcombinations(input,s,0);
    for(int i=0;i<ans.size();i++)
     {
        cout<<ans[i]<<"\n";
     }

}