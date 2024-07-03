#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double hours, rate, gross, tax, net;

  cout << "Enter hours worked: ";
  cin >> hours;

  cout << "Enter hourly rate: ";
  cin >> rate;

  gross = hours * rate;

  tax = gross * 0.15;

  net = gross - tax;

  cout << fixed << setprecision(2);

  cout << "\nGross Pay: dfvfv$" << gross << endl;
  cout << "Taxes: $" << tax << endl;
  cout << "Net Pay: $" << net << endl;

  return 0;
}