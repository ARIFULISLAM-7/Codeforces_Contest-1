#include <iostream>
#include <iomanip>
int main () {
    int x, p;
    std:: cin >> x >> p;
    double org_price = p / (1 - x / 100.0);
    std:: cout<< std:: fixed << std:: setprecision(2) << org_price;
    return 0;
}