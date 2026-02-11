#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main () {
    long long e, m, b;
    cin >> e >> m >> b;
    long long total = 0;

    long long type_3 = min(e, min(m, b));
    total += type_3;
    e -= type_3;
    m -= type_3;
    b -= type_3;

    long long type_1 = min(e / 2, b);
    total += type_1;

    cout << total;

    return 0;
}