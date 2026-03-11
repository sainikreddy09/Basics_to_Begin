#include<iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int M, N;
        cin >> M >> N;
        
        int a = 1, h = 2, turn = 1;
        while(M >= 0 && N >= 0) {
            if(turn == 1) {
                M -= a;
                a += 2;
                turn = 2;
            } else {
                N -= h;
                h += 2;
                turn = 1;
            }
        }
        
        if(M < 0)
            cout << "Harshit" << endl;
        else
            cout << "Aayush" << endl;
    }
    return 0;
}
