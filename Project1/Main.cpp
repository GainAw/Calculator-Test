#include "Calculator.h"
#include <conio.h>
using namespace std;
using namespace Calculator;
bool should_exit = false;
bool working_on_right = false;
char op;
string left_value;
string right_value;
void shift_left_value(char keycode)
{
	if (keycode == '.') {
		if (left_value.find('.') == string::npos)
		{
			left_value = left_value + keycode;
		}
	}
	else;
	{
		left_value = left_value + keycode;
	}
}
void shift_right_value(char keycode)
{
	if (keycode == '.') {
		if (right_value.find('.') == string::npos)
		{
			right_value = right_value + keycode;
		}
	}
	else;
	{
		right_value = right_value + keycode;
	}
}

int main()
{
	do {
		char keycode = _getche();
	
		if (keycode >= '0' && keycode <= '9' || keycode == '.')
		{
			if (working_on_right)
			{
				shift_right_value(keycode);
			}
			else
			{
				shift_left_value(keycode);
			}
		}
		else 
		{
			switch (keycode)
			{
			case 'x':
			case 'X':
				{
					should_exit = true;
			} break;
			case 'i':
			case 'I':
			{
				invert();
			}break;
			case 'm':
			case 'M':
			{
				if (working_on_right)
				{
					shift_right_value(memory());
				}
				else
				{
					shift_left_value(memory());
				}
			} break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			{
				working_on_right = true;
				op = keycode;
			}break;
			case 13:
			{
				switch (op)
				{
				case '+':
				{
					add(stod(left_value), stod(right_value));
					cout << endl << add(stod(left_value), stod(right_value)) << endl;
				}break;
				case '-':
				{
					sub(stod(left_value), stod(right_value));
					cout << endl << sub(stod(left_value), stod(right_value)) << endl;
				}break;
				case '*':
				{
					mult(stod(left_value), stod(right_value));
					cout << endl << mult(stod(left_value), stod(right_value)) << endl;
				}break;
				case '/':
				{
					div(stod(left_value), stod(right_value));
					cout << endl << div(stod(left_value), stod(right_value)) << endl;
				}break;
				case '^':
				{
					car(stod(left_value), stod(right_value));
					cout << endl << car(stod(left_value), stod(right_value)) << endl;
				}break;
				}
			}
			}
		}
	} while (!should_exit);
	return 0;
}