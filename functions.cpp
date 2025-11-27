#include "header.h"

// Function to add a new student record
void StudentRecord::add_student() {
    Student s;
    label1:
    cout << "Enter the roll number: " << endl;
    cin >> s.roll_no;
    if(validate_roll_no(s.roll_no) == 0) {
        cout << "Error: Duplicate roll number found!" << endl;
        goto label1;
    }

    label2:
    cout << "Enter the student name and father name: " << endl;
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, s.student_name_and_father_name);
    if(validate_name(s.student_name_and_father_name) == 0) {
        cout << "Error: Duplicate name found!" << endl;
        goto label2;
    }

    cout << "Enter the department: " << endl;
    cin >> s.department;
    cout << "Enter the percentage for semester 1: " << endl;
    cin >> s.sem1_marks;
    cout << "Enter the percentage for semester 2: " << endl;
    cin >> s.sem2_marks;
    cout << "Enter the percentage for semester 3: " << endl;
    cin >> s.sem3_marks;
    cout << "Enter the percentage for semester 4: " << endl;
    cin >> s.sem4_marks;
    cout << "Enter the percentage for semester 5: " << endl;
    cin >> s.sem5_marks;
    s.cgpa = (s.sem1_marks + s.sem2_marks + s.sem3_marks + s.sem4_marks + s.sem5_marks) / 50.0;
    records.push_back(s);
    cout << "Student record added successfully!" << endl;
}

// Function to display all student records
void StudentRecord::display_students() {
    if(records.empty()) {
        cout << "No student records available." << endl;
        return;
    }
    for(const auto& student : records) {
        cout << "Roll No: " << student.roll_no << endl;
        cout << "Name and Father's Name: " << student.student_name_and_father_name << endl;
        cout << "Department: " << student.department << endl;
        cout << "Semester 1 Percentage: " << student.sem1_marks << endl;
        cout << "Semester 2 Percentage: " << student.sem2_marks << endl;
        cout << "Semester 3 Percentage: " << student.sem3_marks << endl;
        cout << "Semester 4 Percentage: " << student.sem4_marks << endl;
        cout << "Semester 5 Percentage: " << student.sem5_marks << endl;
        cout << "CGPA: " << student.cgpa << endl;
        cout << "-----------------------------" << endl;
    }
}

// Function to search for a student by name
void StudentRecord::search_student() {
    string name;
    cout << "Enter the student name to search: " << endl;
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, name);
    bool found = false;
    for(const auto& student : records) {
        if(student.student_name_and_father_name == name) {
            cout << "Student found!" << endl;
            cout << "Roll No: " << student.roll_no << endl;
            cout << "Name and Father's Name: " << student.student_name_and_father_name << endl;
            cout << "Department: " << student.department << endl;
            cout << "Semester 1 Percentage: " << student.sem1_marks << endl;
            cout << "Semester 2 Percentage: " << student.sem2_marks << endl;
            cout << "Semester 3 Percentage: " << student.sem3_marks << endl;
            cout << "Semester 4 Percentage: " << student.sem4_marks << endl;
            cout << "Semester 5 Percentage: " << student.sem5_marks << endl;
            cout << "CGPA: " << student.cgpa << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Student with name " << name << " not found." << endl;
    }
}