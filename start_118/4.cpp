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
    int n, k; cin>>n>>k;
    if(k == 1){
    	cout << n << "\n";
    	return;
    }
    vi v;
    int f_ele = n / k;
    v.pb(f_ele); int f = f_ele;
    for(int i=0; i<k-1; i++)
    {
    	f += f_ele;
    	v.pb(f);
    }
    for(int i : v) cout << i << " ";
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