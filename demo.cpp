#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <cmath>
#define ll long long int
#include <unordered_map>
using namespace std;

void sol()
{
    ll n, ans = -1;
    cin >> n;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        pq.push(-1*x);
    }

    int node = pq.top() * -1;
    pq.pop();

    if(node>0)
    {
        ans = 0;
        cout << ans << endl;
        return;
    }
    
    while(pq.size())
    {
        int x = -1*pq.top();

        if(node +1 < x)
        {
            // cout<< node <<"yes"<<endl;
            ans = node + 1;
            break;
        }
        node = x;
        pq.pop();

    }

    if(ans == -1)
    {
        ans = node + 1;
    }
    cout << ans << endl;

    
}

//////////////////////=======================///////////////////////////////

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        sol();
    
    }
    return 0;
}


