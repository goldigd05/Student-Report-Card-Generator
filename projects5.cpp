#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void inputDetails() {
        total = 0;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        percentage = total / 5.0;
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 50)
            grade = 'C';
        else
            grade = 'F';
    }

    void displayReport() {
        cout << "\n--- REPORT CARD ---\n";
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << roll << "\n";
        cout << "Total Marks: " << total << "/500\n";
        cout << "Percentage: " << percentage << "%\n";
        cout << "Grade: " << grade << "\n";

        if (grade == 'F')
            cout << "Status: Failed\n";
        else
            cout << "Status: Passed\n";
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.calculate();
    s.displayReport();
    return 0;
}
