#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout <<"\t"<<" ";
        }
        
        int num = i;
        for (int k = 1; k <= i; k++) {
            cout << num <<"\t"<<" ";
            num++;
        }
        
        num -= 2;
        for (int k = 1; k < i; k++) {
            cout << num <<"\t"<<" ";
            num--;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPyramid(n);
    return 0;
}
