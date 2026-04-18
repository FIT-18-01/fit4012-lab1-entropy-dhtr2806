#include <iostream>

using namespace std;

int extendedGCD(int a, int b, int &x, int &y) {
    if (a == 0) { x = 0; y = 1; return b; }
    int x1, y1;
    int gcd = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

// Đảm bảo tên hàm là mod_inverse
int mod_inverse(int a, int m) {
    int x, y;
    int g = extendedGCD(a, m, x, y);
    if (g != 1) return -1;
    return (x % m + m) % m;
}

int main() {
    int a = 3, m = 11;
    int inv = mod_inverse(a, m);
    cout << "Nghich dao modulo la: " << inv << endl;
    return 0;
}
