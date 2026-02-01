//-----//Shoodler//-----//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        double sum=0,b=0,sqt=0;
        while (n--)
        {
            double a; cin >> a;
            sum+=a;
        }
        sqt=sqrt(sum);
        b=sqt-floor(sqt);

        if(b==0) cout<<"yes";
        else cout<<"no";

        cout<<endl;
    }
}
