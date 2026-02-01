//----//Shoodler//----//
#include <iostream>
using namespace std;

int main(void)
{
    int n,m,k=0; cin>>n>>m;
    while(n!=m)
    {
        if(m&1) m++;
        else if(m>2*n) m>>=1;
        else if(m>=2*n) n<<=1;
        else n--;
        k++;
    }
    cout<<k;
}
