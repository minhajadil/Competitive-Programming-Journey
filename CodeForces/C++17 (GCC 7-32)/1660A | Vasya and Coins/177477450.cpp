// Problem: A. Vasya and Coins
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 while(t--)
 {
  int a , b ;
  cin >> a>>b ;
  
  if(a==0) cout << 1 << endl ;
  else if(b==0) cout << a+1 << endl ;
  else if(a!=0 && b!=0) 
  {
   cout << a+1 +b*2 << endl ;
  }
 }
 
 
}