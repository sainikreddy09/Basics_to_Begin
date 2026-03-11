#include<iostream>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a = n1, b = n2;
    while(b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    int gcd = a;
    int lcm = (n1 * n2) / gcd;
    cout << lcm;
    return 0;
}

