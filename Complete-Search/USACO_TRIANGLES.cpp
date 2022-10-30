#include <bits/stdc++.h>
using namespace std;

int pow(int a , int b){
	int res = 1;
	while(b){
		if (b & 1) res *= a;
		b >>= 1;
		a *= a;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t z = clock();

	int n;
	cin >> n;
	vector <int> x(n) , y(n);
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}
	for (int i = 0; i < n; i++){
		cin >> y[i];
	}
	int amx = -1e9;
	for (int i = 0; i < n; i++){
		for (int j = 1; j < n; j++){
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			amx = max(amx , pow(dx , 2) + pow(dy , 2));
		}
	}
	cout << amx << endl;

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

}
