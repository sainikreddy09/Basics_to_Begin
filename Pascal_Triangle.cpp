#include <iostream>
using namespace std;

void printPascal(int N) {
    int arr[N][N];
    for (int line = 0; line < N; line++) {
        for (int i = 0; i <= line; i++) {
            if (i == 0 || i == line)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            cout << arr[line][i] << "\t ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printPascal(N);
    return 0;
}
