/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (Hawkins): 2/1/20
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

//Cole_Hawkins_Calculations 2/1/20
//This is a program to work with the various arithmetic operators in C++ and conditions
#include <iostream>
int main()
{
//Declare and intialize variables
//Number variables:
double number1 = 0.0;
double number2 = 0.0;
int number3 = 0;
int number4 = 0;
//Mathematical variables
double addition = 0.0;
double subtraction = 0.0;
double multiplication = 0.0;
double division = 0.0;
int modulus = 0;

//Input
do
{
cout << "Please enter a number with or without a decimal, that is not equal to 0, for Number 1: " << endl;
number1 = validateDouble(number1);
if (number1 != 0)
  {
cout << "You entered: " << number1 << endl;
  }
}
while(number1 == 0 ); 


do
{
cout << "Please enter a number with or without a decimal, that is not equal to 0, for Number 2: " << endl;
number2 = validateDouble(number2);
if (number2 != 0)
  {
  cout << "You entered: " << number2 << endl;
  }
}
while(number2 == 0 );


cout << "Please enter a number without a decimal for Number 3: " << endl;
number3 = validateInt(number3);

do
{
cout << "Please enter a number without a decimal, that is not equal to 0, for Number 4: " << endl;
number4 = validateInt(number4);
if (number4 != 0)
  {
  cout << "You entered: " << number4 << endl;
  }
}
while(number4 == 0 );


//Processing
addition = number1+number2;
subtraction = number1-number2;
multiplication = number1*number2;
division = number1/number2;
modulus = number3%number4;
//Output
cout << "Your result is for addition (number1 + number2) is: " << addition << endl;
cout << "Your result is for subtraction (number1 - number2) is: " << subtraction << endl;
cout << "Your result is for multiplication(number1 * number2) is: " << multiplication << endl;
cout << "Your result is for division(number1 / number2) is: " << division << endl;
cout << "Your result is for modulus (number3 % number4) is: " << modulus << endl;

    return 0;
}
