#pragma GCC optimize("Ofast")
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;


int n; 
vector< pair<int,int> > a;

void Input() {
	cin >> n; a.clear(); a.resize(n);
	for (int i=0;i<n;i++){
	int c,b;
	cin>>c>>b;
	a[i]=make_pair(F[i],i);
	}
}

void Solve() {
	int Last = -1, ans = 0;
	sort(a.begin(), a.end());
	for (int i=0; i<n; i++) {
		if (a[i].second < Last) continue;
		Last = a[i].first; ans++;
	}
	cout << ans << endl;
}

int main(int argc, char* argv[]) {

	int T; cin >> T; while (T--) {Input(); Solve();} return 0;
}

/******************************************\
 *  Thuy-Trang Tran, #Team4T's Leader     *
 *  #Team4T Primary Flagship - Salvation  *
\******************************************/


