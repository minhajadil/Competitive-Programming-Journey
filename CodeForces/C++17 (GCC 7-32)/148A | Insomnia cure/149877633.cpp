#include<bits/stdc++.h>
using namespace std ;
 
int main()
{   
 int k ,l ,m , n ,p ;
 cin >> k >> l >> m >> n >> p ;
    
    int cnt=0 ; 
 
 
 for(int i = 1 ;i<=p ;i++)
 {
  if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
  {
   cnt++ ;
  }
 }
 
cout << cnt << endl ;
 
 
 
}