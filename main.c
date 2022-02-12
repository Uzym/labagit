#include<iostream>
#include<algorithm>

using namespace std;
 
const int  N = 1e5 + 10;
 
int check(int x)
{
    for (int i = 2; i < x; i ++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main()
{
	int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x;
        for (int i = n; i < N; i++) {
            if (check(i) && !check(i - n + 1)) {
				x = i - n + 1; 
				break;
			}
        } 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if(i == j) {
                    cout << x << " \n";
                } else {
                    cout << 1 << " \n";
                }
            }
        }
    }
    return 0;
}