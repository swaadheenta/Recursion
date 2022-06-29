#include<bits/stdc++.h>
using namespace std;
// abccba
bool ispalindrome(string s,int start,int end)
{
    if(start>=end)
    {
        return true;
    }
   if(s[start]==s[end])
   return ispalindrome(s,start+1,end-1);
   else
   return false;

}
int main()
{
    // Time complexity is o(n/2);
    string s;
    cin>>s;
    if(ispalindrome(s,0,s.size()-1))cout<<"Yes\n";
    else cout<<"No\n";
} 
//abccba

