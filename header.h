#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

struct Student
{
    int roll_no;
    string student_name_and_father_name, department;
    float sem1_marks, sem2_marks, sem3_marks, sem4_marks, sem5_marks, cgpa;
};

class StudentRecord
{
public:
    int menu_driven_function();
    void add_student();
    void display_students();
    void search_student();
    void update_student();
    void delete_student();

private:
    vector<Student> records;
    int search_name(string name);
    int menu_update_function();
    int validate_roll_no(int roll_no);
    int validate_name(string name);
};
