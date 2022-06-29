#include<bits/stdc++.h>
using namespace std;
void printzigzagwithpre(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<"Pre"<<n<<" ";
    printzigzagwithpre(n-1);
    cout<<"In"<<n<<" ";
     printzigzagwithpre(n-1);
    cout<<"Post"<<n<<" ";

}

void printzigzag(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printzigzag(n-1);
        cout<<n<<" ";
     printzigzag(n-1);
       cout<<n<<" ";

}

/*
(if n==2)

      0   0    0  0
       \ /     \ /       -> Euler's tree !!
        1       1
         \     /
            2


*/
int main()
{
    int n;
    cin>>n;
    printzigzagwithpre(n);
    cout<<"\n";
    printzigzag(n);
}