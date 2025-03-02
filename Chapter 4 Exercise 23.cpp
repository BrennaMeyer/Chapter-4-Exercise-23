// Chapter 4 Exercise 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programer: Brenna Meyer
// Date: March 1st,2025
//Geometry Calculator
//Write a program that displays the following menu : Geometry Calculator
//1. Calculate the Area of a Circle
//2. Calculate the Area of a Rectangle
//3. Calculate the Area of a Triangle
//4. Quit
//Enter your choice(1–4) :
// If the user enters 1, the program should ask for the radius of the circle then display its area.Use the following formula :
//area = πr2
//Use 3.14159 for ππ and the radius of the circle for r.If the user enters 2, 
// the program should ask for the length and width of the rectangle, then display the rectangle’s area.Use the following formula :
//area = length * width
//If the user enters 3, the program should ask for the length of the triangle’s base and its height, then display its area.
// Use the following formula :
//area = base * height * .5
//If the user enters 4, the program should end.
//Input Validation : Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item 
// from the menu.Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.141459;
	int user_choice;

	cout << "Geometry Calculator\n"
		<< "1. Calculate the Area of a Circle\n"
		<< "2. Calculate the Area of a Rectangle\n"
		<< "3. Calculate the Area of a Triangle\n"
		<< "4. Quit\n"
		<< "Enter your choice (1-4):";
	cin >> user_choice;
	cout << endl;

	switch (user_choice)
	{
		float area;

	case 1:
		int radius;
		cout << "What is the radius.";
		cin >> radius;

		if (radius < 0)
		{
			cout << "The radius must be a postive number\n"
				<< "Rerun the program and try again" << endl;
		}
		else
		{
			area = PI * pow(radius, 2);
			cout << "The area of the circle"
				<< area << endl;
		}
		break;

	case 2:
		float width, length;

		cout << "What is the length?" << endl;
		cin >> length;

		if (length > 0)
		{
			cout << "what is tthe width?" << endl;
			cin >> width;

			if (width > 0) 
			{
				area = length * width;
				cout << "The area of the rectangle is"
					<< area << endl;
			}
		else
		{
			cout << "Width must be greater than 0." << endl;
			cout << "Rerun the program and try again." << endl;
		}
	}			//might be wrong
	else
	{
		cout << "Length must be greater than 0." << endl;
		cout << "Rerun the program and try again." << endl;
		}
		break;

		case 3:
			float height,
				base;
			cout << "What is the base?";
			cin >> base;

			if (base > 0)
			{
				cout << "What is the height?";
				cin >> height;

				if (height > 0)
				{
					area = (base * height) * .5;
					cout << "Area of triangle is"
						<< area << endl;
				}
				else
				{
					cout << "Height must be greater than 0\n"
						<< "rerun program and try again" << endl;
				}
			}
			else
			{
				cout << "Base length must be greater than 0\n"
					<< "rerun program and try again" << endl;
			}
			break;

		case 4:
			cout << "Good-Bye" << endl;
			break;

		default:
			cout << "Your choice must be between 1-4.\n"
				<< "rerun program try again."
				<< endl;
			break;
}
			cout << endl;

	return 0;
}


