#include <iostream>

using namespace std;


void displayMenu();
void performOperation(int choice, int num1, int num2);

int main() {
    char choice;
    do {
        int num1, num2, operationChoice;


        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> operationChoice;


        if (operationChoice < 1 || operationChoice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            continue;
        }


        cout << "Enter integers number: ";
        cin >> num1 ;
        cout << "Enter integers number: ";
        cin >> num2 ;


        performOperation(operationChoice, num1, num2);


        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
}


void performOperation(int choice, int num1, int num2) {
    switch (choice) {
        case 1:
            cout << "Result of Addition: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result of Subtraction: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result of Multiplication: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "The second integer is zero, divide by zero" << endl;
            } else {
                cout << "Result of Division: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}
