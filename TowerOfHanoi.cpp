#include<iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move disk 1 from " << A << " to " << C << endl;
        return;
    }
    towerOfHanoi(n - 1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n = 4; // Number of disks
    towerOfHanoi(n, '1', '2', '3'); // A, B and C are names of rods
    return 0;
}