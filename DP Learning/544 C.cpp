#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j;
    int arr[MAX];
    cin>>n;
    for(i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);

    j = 0;
    int Max = 1;
    for(i=1; i<n; i++){
        if(arr[i]-arr[j]<=5){
            Max = max(Max, i-j+1);
        }
        else{
            while(arr[i]-arr[j]>5) ++j;
            Max = max(Max, i-j+1);
        }
    }
    cout<<Max<<endl;

    return 0;

}
