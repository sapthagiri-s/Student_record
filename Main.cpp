#include "header.h"

// Function to display menu and get user choice
int StudentRecord::menu_driven_function()
{
    cout << "Menu for student record management." << endl;
    cout << "1. Add Student" << endl
         << "2. Display Students" << endl
         << "3. Search Student" << endl
         << "4. update Student" << endl
         << "5. Delete Student" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}

// Main function
int main()
{
    StudentRecord sr;

    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        switch (sr.menu_driven_function())
        {
        case 1:
            sr.add_student();
            break;
        case 2:
            sr.display_students();
            break;
        case 3:
            sr.search_student();
            break;
        case 4:
            sr.update_student();
            break;
        case 5:
           sr.delete_student();
            break;
        default:
            break;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    }
    return 0;
}