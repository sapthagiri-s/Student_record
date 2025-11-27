#include "header.h"

// Function to validate roll number (checks for duplicates)
int StudentRecord::validate_roll_no(int roll_no) {
    for (const auto& student : records) {
        if (student.roll_no == roll_no) {
            return 0;  // Roll number is invalid (duplicate found)
        }
    }
    return -1;  // Roll number is valid (not duplicate)
}

// Function to validate name (checks for alphabetic characters only)
int StudentRecord::validate_name(string name) {
    for(const auto& student : records){
        if(student.student_name_and_father_name == name){
            return 0; // Name is invalid (duplicate found)
        }
    }
    return -1;  // Name is valid (not duplicate)
}
