/** 
*Jenna Patel
* Calculator
* 9/12/24
* Extra:
*/

#include <iostream>
using namespace std; //

int main()
{
    int num1, num2; //variables
    cout << "Enter a number: " << endl; //asking user question
    cin >> num1; //input for number
    cout << "Enter a second number: " << endl;
    cin >> num2; 

    //extra:
    cout << "The minimum of the two numbers is: " << min(num1, num2) << endl; //finds the min of the two numbers using the min function
    cout << "The maximum of the two numbers is: " << max(num1, num2) << endl; //finds the max of the two numbers using the max function

    //prints and calculates all the calculations
    cout << "Sum: " << num1 + num2 << endl; 
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "Modulus: " << num1 % num2 << endl;
    cout << "Increment: " << ++num1 << endl;
    cout << "Decrement: " << --num2 << endl;
    
}

