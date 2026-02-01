#include <bits/stdc++.h>
using namespace std;

int atmostSum(vector<int>&a, int n, int k)
{
     int sum = 0;
     int val = 0;
       int ans = INT_MAX;
       int j = 0;
      for(int i=0; i<n; i++)
	{
          sum+=a[i];
          
         while(j<i && i-j+1>k)
	{
             sum-=a[j];
             j++;
        }
         
         if(i-j+1 == k)
	{
           if(ans > sum)
	   {
               val = j;
               ans = sum;
           }
        }           
      }
 return (val+1);
}

int main(void)
{
      int n,k; cin >> n >> k;
      vector<int>a(n);
      
      for(int i=0; i<n; i++)
         cin >> a[i];
      int sum = 0;
      int j = 0;
      int ans = atmostSum(a,n,k);
      cout << ans;
}



