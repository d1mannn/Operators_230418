#include "Shape.h"
#include "Date.h"


void main()
{
	setlocale(LC_ALL, "rus");
	int a = 5;
	int b = 10;
	cout << ++a << endl;
	cout << a << endl;
	cout << a + b << endl; // это ОК
	Circle c1(10);
	Circle c2(12);
	cout << c1 + c2 << endl; // не можем так сделать пока не напишем метод оператора
	cout << c1 * c2 << endl;
	cout << c1 - c2 << endl;
	cout << c1 / c2 << endl;
	//c2 = c1 + 7.0; // сначала радиус был 5, теперь увеличили 17(радиус с1 = 10 + 7.0
	//c2 = c1.operator+(7.0); // то же, что выше
	//cout << c2.getRadius() << endl;
	cout << (c1 == c2) << endl;
	cout << (c1 == 10.0) << endl;
	cout << (c1 > c2) << endl;
	cout << endl << endl;
	cout << (c1 += (5*150)) << endl;
	cout << (c1 -= 6) << endl;
	cout << endl << endl;
	cout << endl << endl;

	Date d1(28, 12, 2000);
	Date d2(15, 12, 1998);
	if (d1 == d2)
		cout << "РАВНО" << endl;
	else
		cout << "НЕ РАВНО" << endl;
	d1.operator+=(2000);
	d1.print();
	system("pause");
}