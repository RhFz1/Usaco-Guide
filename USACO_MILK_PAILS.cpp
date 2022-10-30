#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int x , y , m;
	cin >> x >> y >> m;
	int ans = -1e9;
	for (int i = 1; i <= (m / x); i++){
		for (int j = 1; j <= (m / y); j++){
			if (x * i + y * j <= m) ans = max(ans , x * i + y * j);
		}
	}
	cout << ans << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
