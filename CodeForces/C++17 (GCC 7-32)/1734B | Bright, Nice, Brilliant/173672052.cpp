#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
 
    cin >> t ;
    while(t--)
    {
    int n ;
 
    cin >> n ;
    
    for(int i =1 ;i<=n ;i++)
    {
        if(i==1) cout << 1 << endl ;
        else
        {
            cout << 1 << " " ;
            for(int j =1 ;j<i-1 ;j++)
            {
                cout << 0 << " " ;
            }
            cout << 1 << endl ;
        }
 
    }
}
 
}