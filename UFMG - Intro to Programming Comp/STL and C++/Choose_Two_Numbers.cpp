#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define ii pair<int,int>
#define vi vector<int>
#define vb vector<bool>

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main(){ _ 
    int n; cin >> n;
    int maxA = 0, maxB = 0;

    for(auto i{0}; i<n; ++i) 
    {
        int a; cin >> a;
        maxA = max(maxA, a);
    }

    int m; cin >> m;

    for(auto i{0}; i<m; ++i) 
    {
        int b; cin >> b;
        maxB = max(maxB, b);
    }
        
    cout << maxA << " " << maxB << endl;

    return 0;
}

//Codeforces Round 580 (Div. 2) - A>