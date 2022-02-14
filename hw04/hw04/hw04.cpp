/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/


#include "employee.h"
#include "architect.h"
#include "date.h"
#include "programmer.h"

int main() {

	//init employee, programmer, and software architect
	Employee emp();
	Employee emp1("Jimmy Fallon", "12345", "949-555-1234", 40, 'M', "Comedian", 100000, Date(8, 31, 2014));
	Employee emp2("Monkey D. Luffy:", "12346", "949-555-1234", 19, 'M', "Pirate", 100000, Date(8, 31, 2014));			//equal phone number to emp1
	Employee emp3("Roronoa Zoro:", "12346", "819-123-4567", 19, 'M', "Pirate", 100000, Date(8, 31, 2014));				// equal phone number to prog1

	Programmer prog();
	Programmer prog1("Sam Software", "54321", "819-123-4567", 21, 'M', "Programmer", 223000, Date(12, 24, 2011), 5432122, "Joe Boss", 4, true, false);

	SoftwareArchitect soft();
	SoftwareArchitect soft1("Alex Arch", "88888", "819-123-4444", 31, 'M', "Architect", 323000, Date(12, 24, 2009), 5434222, "Big Boss", 5, 4);

	//print original values
	cout << "Original Employee" << endl;
	emp1.print();
	cout << endl << endl;

	cout << "Original Programmer" << endl;
	prog1.print();
	cout << endl << endl;

	cout << "Original Software Architect" << endl;
	soft1.print();
	cout << endl << endl;

	//updating employee data members
	emp1.setAge(41);
	emp1.setSalary(120000);

	prog1.setAge(22);
	prog1.setSalary(240000);
	prog1.setKnowsJava(true);

	soft1.setAge(32);
	soft1.setSalary(383000);

	//print updated values
	cout << "========== UPDATED ==========\n";
	cout << "Updated Employee" << endl;
	emp1.print();
	cout << endl << endl;

	cout << "Updated Programmer" << endl;
	prog1.print();
	cout << endl << endl;

	cout << "Updated Software Architect" << endl;
	soft1.print();
	cout << endl << endl;

	cout << "TEST OBJECTS CREATED (HW04 OUTPUT BEGINS HERE):\n";
	emp2.print();
	cout << endl;
	emp3.print();
	cout << endl << endl;


	cout << "Checking equality of phone numbers (friend) (test1) ...";

	if (checkPhoneNum(emp3, prog1) == true)
	{
		cout << "Employee and Programmer phone numbers are the same.";
		cout << endl;
	}
	else
	{
		cout << "Employee and Programmer phone numbers are not the same.";
		cout << endl;
	}

	cout << "Checking equality of phone numbers (friend) (test2) ...";

	if (checkPhoneNum(emp1, prog1) == true)
	{
		cout << "Employee and Programmer phone numbers are the same.";
		cout << endl;
	}
	else
	{
		cout << "Employee and Programmer phone numbers are not the same.";
		cout << endl;
	}
	cout << endl;

	cout << "\nAre employee phone numbers same? (operator) (test1): ";

	if ((emp1 == emp2) == 1)
	{
		cout << "Yes";

	}
	else
	{
		cout << "No";
	}

	cout << "\nAre employee phone numbers same? (operator) (test2): ";

	if ((emp2 == emp3) == 1)
	{
		cout << "Yes";

	}
	else
	{
		cout << "No";
	}

	cout << endl << endl;

	emp3.addAge(2);
	cout << endl;
	emp3.print();

	cout << endl << "Enter new employee details: " << endl;

	Employee newEmp;

	cin >> newEmp;

	cout << newEmp;

	cout << "Increasing age by 10" << endl;

	newEmp += 10;


	cout << endl << newEmp;


	cout << endl;


	return 0;
}
