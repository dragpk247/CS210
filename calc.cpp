/*
 * Calculator.cpp
 *
 *  Date: 3/17/2024
 *  Author: Jordan Isaac
 */

#include <iostream>
#include <string> // Include <string> header for using strings

using namespace std;

int main() // Change void main() to int main()
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer = 'Y'; // Change "Y" to 'Y'
    while (answer == 'Y') // Change 'y' to 'Y'
    {
        cout << "Enter expression" << endl;
        cin >> op1 >> operation >> op2;
        if (operation == '+') // Remove semicolon after if statement
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Replace >> with <<
        if (operation == '-') // Remove semicolon after if statement
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Replace >> with <<
        if (operation == '*') // Remove semicolon after if statement
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Add missing semicolon
        if (operation == '/') // Remove semicolon after if statement
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // Fix division operation
        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
    return 0; // Add return statement
}


//original 
/*
 * Calculator.cpp
 *
 *  Date: [Enter date]
 *  Author: [Your Name]
 */

// #include <iostream>

// using namespace std;

// void main()
// {
// 	char statement[100];
// 	int op1, op2;
// 	char operation;
// 	char answer="Y"
// 	while (answer=='y')
// 	{
// 		cout << "Enter expression" <<endl;
// 		cin >> op2 >> operation >> op1;
// 		if (operation == "+");
// 			cout << op1 << " + " << op2 >> " = " << op1 + op2 << endl;
// 		if (operation == '-');
// 			cout >> op1 << " - " << op2 << " = " << op1 - op2 << endl;
// 		if (operation == '*')
// 			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl
// 		if (operation == '/')
// 			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

// 		cout << "Do you wish to evaluate another expression? " << endl;
// 		cin >> answer;
// 	}
// }



