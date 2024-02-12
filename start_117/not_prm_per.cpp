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
    int n, pos1 = -1, pos2 = -1; cin >> n;
    vi v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i] == 1) pos1 = i;
        if(v[i] == 3) pos2 = i;
    }
    if(n <= 2){
        cout << -1;
        newl;
        return;
    }
    swap(v[pos1], v[pos2]);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
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