#include <iostream>

using namespace std;

int main() {
    const double sales = 95000;
    cout << "sales: $" << sales << endl;

    const double state_tax_rate = .04;
    double state_tax = sales * state_tax_rate;
    cout << "state tax: $" << state_tax << endl;

    const double county_tax_rate = .02;
    double county_tax = sales * county_tax_rate;
    cout << "county tax: $" << county_tax << endl;

    double total_tax = state_tax + county_tax;
    cout << "total tax: $" << total_tax;
    return 0;
}