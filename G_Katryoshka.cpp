#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll e, m, b, res=0;
    cin>>e>>m>>b;
    if(e == 0 || b == 0)
    { 
        cout<<"0";
    }
    else{ 
        ll mn = e;
        
        if(m < mn)
        {
            mn = m; 
        }
        if(b < mn)
        {
            mn = b;
        }
        res += mn;
        e -= mn;
        b -= mn;
        m -= mn;
        if(e/2 < b)
        {
            res += e / 2;
        }
        else
        {
            res += b;
        }
        cout<<res;
    }
    return 0;
}
