//----//Shoodler//----//
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    int n; cin >> n;
    priority_queue<  long long, vector<long long>, greater<long long> > potions;	//min-heap pq
    long long health = 0;

    while (n--)
    {
        long long x; cin >> x;
        health += x;		//incr total health 
        potions.push(x);	//incr potion count in pq

        while (health < 0)
        {
            cout<<potions.top()<<endl;
            health -= potions.top();		//remove potions in ascending order till health is non negative
            potions.pop();
        }
    }

    cout << (int) potions.size();
}
