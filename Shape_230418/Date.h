#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	Date() = default;
	Date(const int & day, const int &month, const int &year);

	bool operator==(Date date)
	{
		if (this->day == day && this->month == month && this->year == year)
			return 1;
		else
			return 0;
	}

	void operator+=(int  day) 
	{
		//y % 4 != 0 || y % 100 == 0 && y % 400 != 0
		if ((this->year %4 ==0 && this->year % 100 != 0) || this->year % 400 == 0)
		{	
			if (month == 12)
			{
				if ((this->day + day) > 31)
				{	
					month = 1;
					year += 1;
					int temp = day - (31 - this->day);
					int countD = 0;
					/*int countM = 0;
					int countY = 0;*/
					int i = 0;
					this->day = 0;
					while (i != day)
					{
						i++;
						countD++;
						if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
						{
							if (countD == 31)
							{
								countD = 0;
								month++;
							}
						}
						else if (month == 4 || month == 6 || month == 9 || month == 11)
						{
							if (countD == 30)
							{
								countD = 0;
								month++;
							}
						}
						else if(month == 2)
						{
							if (countD == 29)
							{
								countD = 0;
								month++;
							}
						}
						else if (month == 12)
						{
							if (countD == 31)
							{
								countD = 0;
								year++;
								month = 1;
							}
						}
					}
					
					this->day = countD;
				}
				else
					this->day += day;
			}
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
			{
				if ((this->day + day) > 31)
				{
					month += 1;
					this->day = day - (31 - this->day);
				}
				else
					this->day += day;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if ((this->day + day) > 30)
				{
					month += 1;
					this->day = day - (30 - this->day);
				}
				else
					this->day += day;
			}
			else
			{
				if ((this->day + day) > 28)
				{
					month += 1;
					this->day = day - (28 - this->day);
				}
				else
					this->day += day;
			}
		}
		else
		{
			if (month == 12)
			{
				if ((this->day + day) > 31)
				{
					month = 1;
					year += 1;
					this->day = day - (31 - this->day);
				}
				else
					this->day += day;
			}
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
			{
				if ((this->day + day) > 31)
				{
					month += 1;
					this->day = day - (31 - this->day);
				}
				else
					this->day += day;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if ((this->day + day) > 30)
				{
					month += 1;
					this->day = day - (30 - this->day);
				}
				else
					this->day += day;
			}
			else
			{
				if ((this->day + day) > 29)
				{
					month += 1;
					this->day = day - (29 - this->day);
				}
				else
					this->day += day;
			}
		}
	}

	void print()
	{
		cout << day << "." << month << "." << year << endl;
	}
		

private:
	int day;
	int month;
	int year;
};

Date::Date(const int & day, const int &month, const int &year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

