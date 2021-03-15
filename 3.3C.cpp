#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define y0 holdtheflower
#define y1 enjoythecolorandscent
#define yn walkthroughthesoulgarden
#define j1 feelthewarmbreathofkindnessandsalvation

#define endl '\n'


int n;

void Input() {
	cin >> n;
}

void Solve() {
	for (int seven=n/7; seven>=0; seven--) {
		if ((n - seven * 7) % 4 != 0) continue;
		int four = (n - seven * 7) / 4;
		for (int x=0; x<four; x++) cout << "4";
		for (int x=0; x<seven; x++) cout << "7";
		cout << endl; return;
	}
	cout << "-1\n";
}

int main() {
	
	int T; cin >> T; while (T--) {Input(); Solve();} return 0;
}

/******************************************\
 *  Thuy-Trang Tran, #Team4T's Leader     *
 *  #Team4T Primary Flagship - Salvation  *
\******************************************/

