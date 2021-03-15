#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;
    // Nh?p n
    cin >> n;

    // M?ng dánh d?u, mark[i] == true thì i là s? nguyên t?
    vector<bool> mark(n+1, true);
    

    for(int i = 2; i <= n; i++) {
        if (mark[i]) {
            for(int j = i*2; j <= n; j+=i) {
                mark[j] = false;
            }
        }
        
    }
      for(int i = 2; i <= n; i++) {
        if (mark[i]) printf("%d ", i);
    }
    printf("\n");
    }
