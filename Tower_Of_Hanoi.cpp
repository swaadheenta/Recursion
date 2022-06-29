// This code is contributed by Gayatri Agnani !!

#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char d1,char d2,char d3)   //   here d1=src,d2=dest,d3=helper
{                      
    if(n==0)
    {
        return;
    }
   towerofhanoi(n-1,d1,d3,d2); // Faith is this will move n-1 disks from tower 1 to tower 3
                               //     so that we can easily move last disk from tower 1 to tower 2 !!
    
    cout<<"Move "<<n<<" from "<<d1<<" to "<<d2<<"\n";
                                          // again I will use the same faith to move n-1 disks from
                                          //tower 3 to tower 2  !!
towerofhanoi(n-1,d3,d2,d1);

}
int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
}