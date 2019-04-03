#pragma once
#include<string>
#include<iostream>
#include<conio.h>

using namespace std;

namespace Calculator
{
	double add(double left, double right);
	double sub(double left, double right);
	double mult(double left, double right);
	double div(double left, double right);
	double car(double left, double right);
	double invert();
	double square(double left);
	double logarithm(double left);
	double sine(double left);
	double cosine(double left);
	double tangent(double left);
}
