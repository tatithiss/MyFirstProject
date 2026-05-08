#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

void displayStudent(Student s) {
    cout << "ID: " << s.id << " | Name: " << s.name << " | Grade: " << s.grade << "%" << endl;
}

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    cout << "--- Entry Student Data ---" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> students[i].id;
        cout << "Enter Name: ";
        cin >> students[i].name;
        cout << "Enter Grade: ";
        cin >> students[i].grade;
        cout << "--------------------------" << endl;
    }

    cout << "\n--- Displaying All Students ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        displayStudent(students[i]);
    }

    return 0;
}
