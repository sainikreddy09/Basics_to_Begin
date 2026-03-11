#include<iostream>
using namespace std;


void generateFibonacci(int n, int fib[]) {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n * (n + 1) / 2; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    int n;
    cin >> n;
    int fib[n * (n + 1) / 2]; 
    generateFibonacci(n, fib);

    int index = 0;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << fib[index++] << "   ";
        }
        cout << "\n";
    }

    return 0;
}
