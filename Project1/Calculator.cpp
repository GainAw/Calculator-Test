#include "Calculator.h"
#include <math.h>
namespace Calculator
{
	double current_value = 0.0;
	double currentValue()
	{
		return (current_value);
	}

	double add(double left, double right)
	{
		current_value = left + right;
		return (left + right);
	}
	double sub(double left, double right)
	{
		current_value = left - right;
		return (current_value);
	}
	double mult(double left, double right)
	{
		current_value = left * right;
		return (current_value);
	}
	double div(double left, double right)
	{
		current_value = left / right;
		return (current_value);
	}
	double car(double left, double right)
	{
		current_value = pow(left, right);
		return (current_value);
	}
	double invert()
	{
		current_value = current_value * -1.0;
		return (current_value);
	}
	double square(double left)
	{
		current_value = sqrt(left);
		return (current_value); 
	}
	double logarithm(double left)
	{
		current_value = log (left);
		return (current_value);
	}
	double sine(double left)
	{
		current_value = sin(left);
		return (current_value);
	}
	double cosine(double left)
	{
		current_value = cos(left);
		return (current_value);
	}
	double tangent(double left)
	{
		current_value = tan(left);
		return (current_value);
	}
 }
