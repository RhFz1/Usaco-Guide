#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n , k;
	cin >> n >> k;
	vector <int > v(n);
	for (auto &i : v) cin >> i;          
	sort(v.begin() , v.end());
	
	int ans = -1e9;
	for (int i = 0; i < n; i++){
		int cnt = 1;
		for (int j = i + 1; j < n; j++){
			if (v[j] - v[i] <= k)cnt++;
			else break;
		}
		ans = max(ans , cnt);
	}
	cout << ans << endl;
	
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
