#include <iostream>
#include <ctime>
#include <fstream>
#include <string>


using namespace std;

int sumDigits(int num);

int reverseDigits(int num);

void readFile();


int main()
{
	enum Choice { sum, reverse };
	typedef int int_t;

	//initializing random number generator for 3 digits
	srand(time(NULL));
	int randNum = rand() % 900 + 100;

	int choice;
	int displayNum;

	//User prompt
	cout << "Random 3 digit number: " << randNum;
	
	cout << endl << "What would you like to do? " << endl << "1) Sum the digits\n2) Triple the number\n3) Reverse the digits\n\n";

	cin >> choice;
	cout << endl;


	//If statement for choice
	if (choice == 1)
	{
		displayNum = sumDigits(randNum);
		cout << displayNum;
	}
	else if (choice == 2)
	{
		displayNum = randNum * 3;
		cout << displayNum;
	}
	else if (choice == 3)
	{
		displayNum = reverseDigits(randNum);
		cout << displayNum;
	}

	cout << endl << endl << "ARRAY WORK" << endl;

	//array

	const int AR_SIZE = 10;

	

	int array[AR_SIZE];

	for (int i = 0; i < AR_SIZE; i++)
	{
		array[i] = (rand() % 100) + 1;

		cout << array[i] << " | ";
	}

	int i, j;
	int temp;

	for (i = 0; i < AR_SIZE; i++)
	{
		for (j = i + 1; j < AR_SIZE; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "\nSorted Array (Ascending Order): " << endl;
	for (i = 0; i < AR_SIZE; i++) 
	{
		cout << array[i] << " | ";
	}
	
	cout << endl << endl;


	//open file for writing
	fstream file;
	file.open("Text.txt");

	if (file.is_open())
	{
		for (i = 0; i < AR_SIZE; i++)
		{
			file << array[i] << endl;

		}

		file.close();
	}
	else 
	{
		cout << "Error opening file.\n";
	}

	readFile();







	return 0;
}



int reverseDigits(int num)
{
	int flag = 0, x = 0;

	if (num < 0)
	{
		flag = 1;
	}

	num = abs(num);

	while (num > 0)
	{
		x = x * 10 + num % 10;
		num = num / 10;
	}

	if (flag == 1)
	{
		x = x * (-1);
		
	}

	return x;

}

int sumDigits(int num) 
{
	int r;
	int sum = 0;

	while (num > 0)
	{
		r = num % 10;
		num = num / 10;
		sum = sum + r;

	}

	return sum;
}

void readFile()
{
	string text;

	ifstream readFile("Text.txt");
	cout << "\n" << "Printing from file in function: \n";
	while (getline(readFile, text))
	{
		cout << text << " | ";
	}

	readFile.close();
}