#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1e9+7

#define pb push_back
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define all(x) (x).begin(), (x).end()
#define ll             long long
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)
#define google cout << "Case #" << test_num << ": "
#define hi(x)           cout<<"hi"<<x<<endl;
#define ACC(v)          accumulate(v.begin(),v.end(),0ll)

#ifndef ONLINE_JUDGE
#include "debug.hpp"
#else
#define pr(...){}
#define debarr(a,n){}
#define debmat(mat,row,col){}
#endif

//BINARY SEARCH ITERATIVE SEARCH

ll binarySearch(vector<ll> &arr,ll target)
{
    ll n = arr.size()
    // ohh we should have some pointers
    // low , high, mid
    ll low =0,high = n-1,mid = (low + high)/2;

    // compare the middle element with the target
    ll found -1;
    while(low<=high) // equality sign will be there
    {
        // who will update mid dear
        mid = (low + high)/2;

        if(arr[mid] == taget)
        {
            found = mid;
            break;
        }
        else if(arr[mid]>target) // we shoud talk about target dude // go left
        {
            high = mid - 1;
        }
        else  //go right
        {
            low = mid+ 1;
        }
    }

    return found;
}

void solve()
{
    vector<ll> arr = {3,4,6,7,9,12,16,17};
    ll target = 6;
    ll ans = binarySearch(arr,target);
    if(ans != -1)
    cout<<"yeahhh we have found it"<<"\n";
    else
    cout<<"yeahhh we have not found it"<<"\n";
}


int32_t main()
{
  fast;
  #ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  w(t)
  solve();
  
}
 

