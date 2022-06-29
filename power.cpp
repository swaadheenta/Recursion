#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    if(n==1) return x;
else
return x*pow(x,n-1);
}
/*

4^3 = 4*pow(4,2)
      4*4*pow(4,1);
      4*4*4
*/



int pow(int x,int n)
{
    /*  If a number is even then 
    pow(x,n)=pow(x,n/2)*pow(x,n/2);           5^4 = (5^2) *  (5^2)
    else pow(x,n)=pow(x,n/2)*pow(x,n/2)*x;    5^5 =  (5^2) *  (5^2)* 5
    */
   

    if(n==1) return x;
    if(n%2)//odd
    return pow(x,n/2)*pow(x,n/2)*x;
    else
    return pow(x,n/2)*pow(x,n/2);
    
}
/*
2^7  = pow(2,3)*pow(2,3)*2;
      (pow(2,1)*pow(2,1)*2)*(pow(2*1)*pow(2*1)*2)*2


7->3->1
n->n/2->n/4.....1


*/
int main()
{
   int x,n;
   cin>>x>>n;
   cout<<power(x,n);  // Basic approach Time complexity will be o(n) !!

   cout<<pow(x,n); // optimal approach Time complexity will be o(logn);

}