#include <iostream>
#include "header.h"

int menu_driven_function() {
    cout << "Menu for student record management." << endl;
    cout << "1. Add Student" << endl << "2. Display Students" << endl << "3. Search Student" << endl << "4. update Student" << endl << "5. Delete Student" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}

int main() {
    char choice = 'y';
    while(choice == 'y' || choice == 'Y') {
        menu_driven_function();
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    }
    return 0;
}