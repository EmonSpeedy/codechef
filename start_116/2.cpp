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
    vector<char> v(6);
    for(int i=0; i<6; i++) cin>>v[i];
    bool flag = false;
    for(int i=0; i<4; i++)
    {
    	if(v[i] == 'W' and v[i+1] == 'W' and v[i+2] == 'W') {
    		flag = true;
    		break;
    	}
    }
    if(flag) cout << "yes";
    else cout << "no";
    newl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll TC; cin >> TC;
    for(ll k = 1; k <= TC; k++){
        f();
    }
    //f();
    return 0;
}