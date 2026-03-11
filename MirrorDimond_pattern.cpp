#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            for (int j = 1; j <= (n - i) / 2; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    
    for (int i = n - 1; i >= 1; i--) {
        if (i % 2 != 0) {
            for (int j = 1; j <= (n - i) / 2; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}
