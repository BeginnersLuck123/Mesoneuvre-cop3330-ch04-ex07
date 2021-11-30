/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */

#include <iostream>

using namespace std;

int main()
{

   //initializing variables
    string num1Input;
    double num1;
    string num2Input;
    double num2;
    string operation;

    //asking for input
   cout << "Input operator (+, -, *, or /): ";


   //taking in inputs and setting them as operation
    cin >> operation;

   //asking for input
   cout << "Input two operands (0-9): ";
   cout << "\n";
  
   //taking in inputs and setting them as num1Input and num2Input
    cin >> num1Input;
    cin >> num2Input;

    //using if/else if statements to assign num1 to an integer
    if((num1Input == "0" )|| (num1Input == "zero" )|| (num1Input == "Zero"))
    {
        num1 = 0;

    }

    else if((num1Input == "1" )||( num1Input == "one") || (num1Input == "One"))
    {
        num1 = 1;

    }

    else if((num1Input == "2") || (num1Input == "two") ||( num1Input == "Two"))
    {
        num1 = 2;

    }

    else if((num1Input == "3" )||( num1Input == "three") || (num1Input == "Three"))
    {
        num1 = 3;

    }

    else if((num1Input == "4") || (num1Input == "four") ||( num1Input == "Four"))
    {
        num1 = 4;

    }

    else if((num1Input == "5") || (num1Input == "five") || (num1Input == "Five"))
    {
        num1 = 5;

    }
    else if((num1Input == "6" )||( num1Input == "six") || (num1Input == "Six"))
    {
        num1 = 6;

    }
    else if((num1Input == "7" )|| (num1Input == "seven" )|| (num1Input == "Seven"))
    {
        num1 = 7;

    }
    else if((num1Input == "8") ||( num1Input == "eight" )||( num1Input == "Eight"))
    {
        num1 = 8;

    }
    else if ((num1Input == "9" )|| (num1Input == "nine" )|| (num1Input == "Nine"))
    {
        num1 = 9;

    }
    //outputs invalid input if num1 is not within boundaries
    else
    {
        cout << "Invalid Input";
        return 1;
    }



    //using if/else if statements to assign num2 to an integer
    if((num2Input == "0" )|| (num2Input == "zero" )|| (num2Input == "Zero"))
    {
        num2 = 0;

    }

    else if((num2Input == "1" )|| (num2Input == "one" )|| (num2Input == "One"))
    {
        num2 = 1;

    }

    else if((num2Input == "2") || (num2Input == "two" )|| (num2Input == "Two"))
    {
        num2 = 2;

    }

    else if((num2Input == "3") || (num2Input == "three" )|| (num2Input == "Three"))
    {
        num2 = 3;

    }
    else if((num2Input == "4" )||( num2Input == "four" )|| (num2Input == "Four"))
    {
        num2 = 4;
    }
    else if((num2Input == "5") ||( num2Input == "five" )||( num2Input == "Five"))
    {
        num2 = 5;

    }
    else if((num2Input == "6" )|| (num2Input == "six" )|| (num2Input == "Six"))
    {
        num2 = 6;

    }
    else  if((num2Input == "7" )|| (num2Input == "seven" )|| (num2Input == "Seven"))
    {
        num2 = 7;

    }
    else if((num2Input == "8" )|| (num2Input == "eight" )|| (num2Input == "Eight"))
    {
        num2 = 8;

    }
    else if ((num2Input == "9") ||( num2Input == "nine" )|| (num2Input == "Nine"))
    {
        num2 = 9;

    }
       //outputs invalid input if num2 is not within boundaries
    else
    {
        cout << "Invalid Input";
        return 1;
    }



    //using if/else if statements to perform equation and output the solution
    if(operation=="+")
    {
        //equation for addition
        double add = num1 + num2;
        //output for sums
        cout << "The sum of "<< num1 << " and " << num2 << " is " << add << ".";
    }


    else if(operation=="-")
    {
        //equation for subtraction
        double subtract = num1 - num2;
        //output for differences
        cout << "The difference of "<< num1 << " and " << num2 << " is " << subtract << "." ;
    }

    else if(operation=="*")
    {
        //equation for multiplication
        double multiply = num1 * num2;
        //output for product
        cout << "The product of "<< num1 << " and " << num2 << " is " << multiply << ".";
    }

    else if(operation=="/")
    {
        //equation for division
        double divide = num1 / num2;
        //output for quotient
        cout << "The quotient of "<< num1 << " and " << num2 << " is " << divide << ".";
    }
    else
    {
       //outputs invalid input if operation is not *, +, -, or /.
        cout << "Invalid Input";
        return 1;
    }



    return 0;
}
