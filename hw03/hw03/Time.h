#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class ExtendedTime;
class Invoice;

enum timeZone { PACIFIC, MOUNTAIN, CENTRAL, EASTERN };

class Time
{

private:
	int hours;
	int minutes;
	int seconds;

public:

	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int hrs, int min, int sec)
	{
		hours = hrs;
		minutes = min;
		seconds = sec;
	}

	friend ostream& operator <<(ostream&, const Invoice&);
	friend ostream& operator <<(ostream&, const ExtendedTime&);

};

class ExtendedTime : public Time
{
private:

	timeZone zone;

public:

	ExtendedTime() : Time()
	{
		zone = timeZone::EASTERN;
	}

	ExtendedTime(int hrs, int min, int sec, timeZone tzone) : Time(hrs, min, sec)
	{
		zone = tzone;
	}

	friend ostream& operator<<(ostream& output, const ExtendedTime& time)
	{
		string displayZone;

		switch (time.zone)
		{
			case 0:
				displayZone = "PST";
				break;
			case 1:
				displayZone = "MST";
				break;
			case 2:
				displayZone = "CST";
				break;
			case 3:
				displayZone = "EST";
				break;
		}

		output << setfill('0') << setw(2) << time.hours << ':' << setw(2) << time.minutes << ':' << setw(2) << time.seconds << " " << displayZone;

		return output;
	}
};

class Invoice
{
private:
	Time purchase_time;

public:
	Invoice()
	{
		purchase_time = Time();
	}

	Invoice(int hrs, int min, int sec)
	{
		purchase_time = Time(hrs, min, sec);
	}

	friend ostream& operator <<(ostream& output, const Invoice& invoice)
	{
		output << setfill('0') << setw(2) << invoice.purchase_time.hours << ':' << setw(2) << invoice.purchase_time.minutes << ':' << setw(2) << invoice.purchase_time.seconds;

		return output;
	}
};
