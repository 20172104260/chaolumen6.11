// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
private:
	int year;
	int month;
	int day;
public:
	void setvalue(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void operation()
	{
		if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
		{
			day++;
			int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
			if (day > a[month - 1])
			{
				day = day - a[month - 1];
				month++;
				if (month > 12)
				{
					month = month - 12;
					year++;
				}
			}
		}
		else
		{
			day++;
			int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (day > a[month - 1])
			{
				day = day - a[month - 1];
				month++;
				if (month > 12)
				{
					month = month - 12;
					year++;
				}
			}
		}
	}
	void display()
	{
		cout << "Tomorrow is " << year << "." << month << "." << day << endl;
	}
	int limit(int y, int m, int d)
	{
		int a, b, c;
		a = y;
		b = m;
		c = d;
		if (a % 4 == 0 || a % 100 != 0 && a % 400 == 0)
		{
			int j[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
			if (b <= 12)
			{
				if (c > j[b - 1])
				{
					cout << "invalid date!" << endl;
					return 1;
				}
			}
			else
			{
				cout << "invalid date!" << endl;
				return 1;
			}
			//return 1;
		}
		else
		{
			int i[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (b <= 12)
			{
				if (c > i[b - 1])
				{
					cout << "invalid date!" << endl;
					return 1;
				}
			}
			else
			{
				cout << "invalid date!" << endl;
				return 1;
			}
			//return 1;
		}
	}
};
int main()
{
	CDate *p;
	p =new CDate;
	int a, b, c;
	cout << "Please enter the date: " << endl;
	cin >> a >> b >> c;
	p->setvalue(a, b, c);
	p->operation();
	int m;
	m = p->limit(a, b, c);
	if (m == 1)
	{
		return 0;
	}

	p->display();
	return 0;
}

