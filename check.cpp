#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>

using namespace std;

#define int int64_t
#define endl "\n"

int t = 1, cs = 0;
int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0), cin >> t;
    while(t--) {
        int a, b; cin>> a>> b;
        if(a+1 < b) {
            cout << "No" << endl;
            continue;
        }
        int aa = a % 9;
        int bb = b % 9;
        if((aa+1)%9 == bb) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
