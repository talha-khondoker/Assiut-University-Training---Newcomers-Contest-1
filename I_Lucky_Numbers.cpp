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
    ll a;
    cin>>a;
    ll x=a%10;
    a=a/10;
    if((x!=0 && (a%x==0) )|| (a!=0 && (x%a==0))) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}
