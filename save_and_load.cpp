#include "header.h"

//Function to save student records to a file
void StudentRecord::save_to_file(){
    ofstream outfile("student_records.txt");
    for(const auto& student : records) {
        outfile << student.roll_no << "," << student.student_name_and_father_name << "," << student.department << ","
                << student.sem1_marks << "," << student.sem2_marks << "," << student.sem3_marks << ","
                << student.sem4_marks << "," << student.sem5_marks << "," << student.cgpa << endl;
    }
    outfile.close();
    cout << "Student records saved to file successfully!" << endl;
}

//Function to load student records from a file
void StudentRecord::load_from_file(){
    ifstream infile("student_records.txt");
    string line;
    records.clear();
    while(getline(infile, line)) {
        Student s;
        size_t pos = 0;
        string token;
        vector<string> tokens;
        while((pos = line.find(",")) != string::npos) {
            token = line.substr(0, pos);
            tokens.push_back(token);
            line.erase(0, pos + 1);
        }
        tokens.push_back(line); // last token

        s.roll_no = stoi(tokens[0]);
        s.student_name_and_father_name = tokens[1];
        s.department = tokens[2];
        s.sem1_marks = stof(tokens[3]);
        s.sem2_marks = stof(tokens[4]);
        s.sem3_marks = stof(tokens[5]);
        s.sem4_marks = stof(tokens[6]);
        s.sem5_marks = stof(tokens[7]);
        s.cgpa = stof(tokens[8]);

        records.push_back(s);
    }
    infile.close();
    cout << "Student records loaded from file successfully!" << endl;
}