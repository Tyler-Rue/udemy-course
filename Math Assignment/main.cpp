#include <iostream>
using namespace std;

void add(int a, int b, int c, int* d) {
    *d = a + b + c;
}

int main() {

    int x = 5;  // Lines 10-13 will not change
    int y = 10;
    int z = 15;
    int sum = 0;

    add(x, y, z, &sum);

    

    cout << sum; // Keep me!




    return 0;
}