#include "Calculator.h"
#include <conio.h>
#include <sstream>
using namespace std;
using namespace Calculator;
bool should_exit = false;
bool working_on_right = false;
char op;
string left_value;
string right_value;
double memory, answer;
void shift_left_value(char keycode)
{

}
void shift_right_value(char keycode)
{

}

int main()
{
	cout << ">";
	do {
		//This gets input
		char keycode = _getch();

		//checking the input and wich side to work on
		if (keycode >= '0' && keycode <= '9' || keycode == '.')
		{
			if (working_on_right == false)
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
				cout << keycode;
			}
			else
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
				cout << keycode;
			}
		}
		else 
		{
			//this section checks what othe key is used for calculator functions
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
			case 's':
			case 'S':
			{
				memory = answer;
			} break;
			case 'm':
			case 'M':
			{
				memory = 0.0;
			} break;
			case 'r':
			case 'R':
			{	
				//this is the input to place the saved value into either side
				if (working_on_right = false)
				{
					left_value = to_string(memory);
					cout << left_value;
				}
				else;
				{
					right_value = to_string(memory);
					cout << right_value;
				}
			} break;
			//clears calculators
			case 'c':
			case 'C':
			{
				working_on_right = false;
				op = '\0';
				left_value.clear();
				right_value.clear();
				memory = 0.0;
				answer = 0.0;
			} break;
			//checks what oporator is used
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			{
				working_on_right = true;
				op = keycode;
				cout << keycode;
			}break;
			case 13:
			{
				//this section uses given data on both sides and the oporator to solve the math 
				if (left_value.empty() == true) 
				{
					left_value = to_string(answer);
				}

				switch (op)
				{
				case '+':
				{
					answer = add(stod(left_value), stod(right_value));
					cout << endl << answer << endl << ">";
					working_on_right = false;
					left_value.clear();
					right_value.clear();
				}break;
				case '-':
				{
					answer = sub(stod(left_value), stod(right_value));
					cout << endl << answer << endl << ">";
					working_on_right = false;
					left_value.clear();
					right_value.clear();
				}break;
				case '*':
				{
					answer = mult(stod(left_value), stod(right_value));
					cout << endl << answer << endl << ">";
					working_on_right = false;
					left_value.clear();
					right_value.clear();
				}break;
				case '/':
				{
					answer = div(stod(left_value), stod(right_value));
					cout << endl << answer << endl << ">";
					working_on_right = false;
					left_value.clear();
					right_value.clear();
				}break;
				case '^':
				{
					answer = car(stod(left_value), stod(right_value));
					cout << endl << answer << endl << ">";
					working_on_right = false;
					left_value.clear();
					right_value.clear();
				}break;
				}
			}
			}
		}
	} while (!should_exit);
	return 0;
}
