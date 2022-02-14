#include "Time.h"

int main(/*int a, char const* b[]*/)
{
	
	cout << "ExtendedTime using Alternate constructor" << endl;

	ExtendedTime time(7, 19, 59, timeZone::PACIFIC);
	
	cout << time << endl;

	
	cout << "\nInvoice using Alternate constructor" << endl;

	Invoice invoice(10, 29, 5);
	
	cout << invoice << endl;

	return 0;
}