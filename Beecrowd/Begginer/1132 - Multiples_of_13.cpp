#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define ii pair<int, int>
#define vi vector<int>
#define  precise fixed << setprecision(2) 

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    _

    int a, b; cin >> a >> b;
    int sum = 0;

    for(auto i{min(a, b)}; i<= max(a, b); ++i) (i%13 != 0)?sum+=i:0;

    cout << sum << endl;

    return 0;
}