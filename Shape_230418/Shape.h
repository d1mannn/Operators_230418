#pragma once
#include <iostream>
using namespace std;

const double pi = 3.14;
class Circle
{
public:
	Circle() = default;
	Circle(double radius);
	//~Circle();

	double area() {
		return pi*radius*radius;
	}

	double length() {
		return 2 * pi * radius;
	}
	//accessors
	double getRadius() {
		return radius;
	}

	//operators
	double operator+(Circle obj) {
		return this->area() + obj.area();
	}

	double operator-(Circle obj) {
		return this->area() - obj.area();
	}

	double operator/(Circle obj) {
		return this->area() / obj.area();
	}

	double operator*(Circle obj) {
		return this->area() * obj.area();
	}

	bool operator==(Circle obj) {
		return this->radius == obj.radius;
	}

	bool operator==(double obj) {
		return this->radius == obj;
	}

	Circle operator+(double diff) {
		this->radius += diff;
		return *this; // this это указатель
	}

	bool operator>(Circle obj) {
		return this->length() > obj.length();
	}

	double operator+=(double rad) {
		return this->radius += rad;
	}

	double operator-=(double rad) {
		return this->radius -= rad;
	}
private:
	double radius;
};

Circle::Circle(double radius)
{
	this->radius = radius;
}

//Circle::~Circle()
//{
//}