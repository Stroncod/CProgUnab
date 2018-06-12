#include <bits/stdc++.h>
using namespace std;
int main() {
	int x1 = 43, v1 = 2, x2 = 70, v2 = 2;
	int dv = v1 - v2;
	int dx = x2 - x1;
    if(dv == 0)
        return "NO";
    else {
        if(dx%dv <= 0 && dx / dv >= 0) {
            cout << "YES";
        } 
        else
            cout << "NO";
    }
}
