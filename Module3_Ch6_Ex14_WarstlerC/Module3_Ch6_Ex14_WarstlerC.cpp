#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double quarterSales = 0.0;
	double commission = 0.0;
	double payment = 0.0;

	cout << "Enter your quarterly sales: ";
	cin >> quarterSales;

	if (quarterSales < 0)
	{
		commission = -1;
	}
	else if ( quarterSales <= 20000)
	{
		commission = 0.05;
		payment = quarterSales * commission;
	}
	else if (quarterSales <= 50000)
	{
		commission = 0.07;
		payment = (quarterSales * commission) + 1000;
	}
	else if (quarterSales > 50000)
	{
		commission = 0.1;
		payment = (quarterSales * commission) + 3100;
	}

	if (commission != -1)
	{
		cout << fixed << setprecision(2);
		cout << "Payment: $" << payment << endl;
	}
	else
	{
		cout << "Error - Sales can not be less than 0." << endl;
	}
	return 0;
}