#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int t = 1;
	int n;
	cin >> n;
	vector <int > v(n);
	
	for (auto &i : v) cin >> i;
	vector <int> prefix(n + 1 , 0);
	for (int i = 1; i <= n; i++){
		prefix[i] = prefix[i - 1] + v[i - 1];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n; j++){
			int sum = prefix[j] - prefix[i - 1];
			if ((sum % (j - i + 1)) == 0) ans++;
		}
	}
	cout << ans << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}



// #include <iostream>
// #include <algorithm>
// #include <cstdio>

// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(0); cin.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
// 	int n;
// 	cin >> n;
// 	int petals[n];
// 	for (int i = 0; i < n; ++i) {
// 		cin >> petals[i];
// 	}
// 	int photos = 0;
// 	for (int i = 0; i < n; ++i) {
// 		for (int j = i; j < n; ++j) {
// 			int totalPetals = 0;
// 			for (int k = i; k <= j; ++k) {
// 				totalPetals += petals[k];
// 			}
// 			bool present = false;
// 			for (int k = i; k <= j; ++k) {
// 				if (petals[k] * (j-i+1) == totalPetals) {
// 					present = true;
// 				}
// 			}
// 			if (present) {
// 				++photos;
// 			}
// 		}
// 	}
// 	cout << photos;
// 	return 0;
// }
