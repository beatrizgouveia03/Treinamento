#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define ii pair<int,int>
#define vi vector<int>

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 
    ll n; cin >> n;
    vector<ll> idx(n+1), ord(n+1), sad;
    map<ll, pair<ll, ll>> order;
    map<ll,ll> ordIdx;

    for(auto i{0}; i<n; ++i){
        ll t, m, c; cin >> t >> m >> c;
        idx[i] = t; ord[i] = t;
        ordIdx[t] = i+1;
        order[t] = {m, c};
    }

    sort(ord.begin(), ord.begin()+n);

    ll idxM = ord[0];

    for(auto i{1}; i<n; ++i){
        ll t = ord[i];

        if(order[t].s == 1){
            if(order[idxM].f >= t) {
                sad.push_back(ordIdx[idxM]);
            }
            idxM = t;
        }
        else if(order[idxM].f < t) idxM = t;
    }

    cout << sad.size() << endl;

    for(auto i{0u}; i<sad.size(); ++i) cout << sad[i] << " ";
    cout << endl;

    return 0;

    //UNFINISHED
}