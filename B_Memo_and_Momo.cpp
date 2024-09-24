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
    ll a, b, k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0)
    {
        cout<<"Both";
    }
    else if(a%k==0 && b%k!=0)
    {
        cout<<"Memo";
    }
    else if(a%k!=0 && b%k==0)
    {
        cout<<"Momo";
    }
    else if(a%k!=0 && b%k!=0)
    {
        cout<<"No One";
    }
    return 0;
}

// If both a
//  and b
//  are divisible by k
// , both of them win and you should print "Both".
// If a
//  is divisible by k
//  but b
//  isn't, Memo wins and you should print "Memo".
// If b
//  is divisible by k
//  but a
//  isn't, Momo wins and you should print "Momo".
// If both a
//  and b
//  are not divisible by k
// , no one wins and you should print "No One".
