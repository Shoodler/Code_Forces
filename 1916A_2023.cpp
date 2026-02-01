//----//Shoodler//----//

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin>>t;
    while(t--)
    {
        int  i, n, k; cin>>n>>k;
        long long int prod=1;		//long long required to avoid runtime error

        while (n--)
        {
            cin>>i;
            prod*=i;
        }
        if(2023%prod!=0)		//check if 2023 is divisible by product
            cout<<"No";
        else
        {
            cout<<"YES\n"<<2023/prod<<" ";
            for(i=0;i<k-1;i++)
                cout<<1<<" ";
        }				// O/P: 2023/prod, (k-1)'1'
	cout<<endl;
    }
}
