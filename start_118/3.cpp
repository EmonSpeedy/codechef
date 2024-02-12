/*
	In the name of Allah
    author : md sh emon
*/
#include "bits/stdc++.h"
using namespace std;
#define 	ll 			long long
#define 	pb 			push_back
#define 	all(x) 		x.begin(),x.end()
#define 	sortall(x) 	sort(all(x))
#define 	w() 		while()
#define 	newl		cout<<'\n'

typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vll;

void f(){
    int n, m; cin>>n>>m;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0, states = 0;
    for(int i=0; i<n; i++)
    {
        states += v[i];
        if(states >= m){
            cnt++; states = 0;
        }
    }
    cout << cnt;
    newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int TC; cin >> TC;
    for(int k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}