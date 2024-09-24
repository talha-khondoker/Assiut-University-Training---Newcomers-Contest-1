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
    double n, k, a;
    cin>>n>>k>>a;
    double ans1=(n*k) /a;
    ll ans2= ans1;
    double ans3=ans1-ans2;
    if(ans3>0)
    {
        cout<<"double"<<'\n';
    }
    if(ans2<=2147483647)
    {
        cout<<"int"<<'\n';
    }
    else
    {
        cout<<"long long"<<'\n';
    }
    
    return 0;
}
