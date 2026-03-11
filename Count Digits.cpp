#include<iostream>
using namespace std;
int main() {
    int digit;
    int n;
    cin >>n >> digit;
    int count = 0;
    while(n>0) {
        if(n%10 == digit) {
            count++;
        }
		n = n/10;
    }
    cout << count;
    return 0;
}
