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
    int n; cin>>n;
    vi v1(n), v2(n), v3;
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n; i++) cin>>v2[i];
    
    sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());

	for(int i = 0, j = n-1; i < n; i++, j--)
	{
		v3.pb(v1[i]+v2[j]);
	}
	bool flag = 1;
	for(int i=0; i<n-1; i++)
	{
		if(v3[i] != v3[i+1]) flag = 0;
	}
	if(flag){
		for(int i=0; i<n; i++){
			cout << v1[i] << " ";
		}
		newl;
		reverse(v2.begin(), v2.end());
		for(int i=0; i<n; i++){
			cout << v2[i] << " ";
		}
	}
	else cout << -1 ;
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