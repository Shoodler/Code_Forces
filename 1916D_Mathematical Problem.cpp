//-----//Shoodler//-----//

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
int t; cin>>t;      //test cases
while(t--)
{
    int n; cin>>n;
    if(n==1)
        cout<<1<<endl;      //case not following pattern

    else                         //pattern: required squares always have numbers 1,6,9 with 0s to fill gaps.
    {
        for(int i=n/2; i>=1; i--)
        {
            string s(n,'0');        //inside the loop def. so that string is reset every cycle

            s[0]='1'; s[i]='6'; s[i*2]='9';
            cout<<s<<endl;
            s[0]='9'; s[i]='6'; s[i*2]='1';
            cout<<s<<endl;
        }

        string str(n,'0');
        str[0]='1'; str[1]='9'; str[2]='6';     //last case
        cout<<str<<endl;
    }
  }
}
