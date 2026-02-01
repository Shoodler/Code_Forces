//-----//Shoodler//-----//

#include <bits/stdc++.h>
using namespace std;

int t,args[200005];
const int mod=1e9+7;
unsigned long long l,r,out;

int main(void)
{
	scanf("%d",&t);
	while(t--)
        {
		out=0;
		scanf("%llu%llu",&l,&r);

		for(unsigned long long c=2;(1ull<<c)<=r;c++)
		{
			unsigned long long x=max(l,(1ull<<c)),y=min(r,(1ull<<(c+1))-1);
			if(x>y)	continue;

			unsigned long long temp=c;
			while(temp<=y)
                {
				out=(out+(y-max(temp,x)+1)%mod)%mod;
				temp=temp*c;
			}
		}
		printf("%llu\n",out);
	}
}
