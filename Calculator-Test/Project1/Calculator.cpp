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
 }
