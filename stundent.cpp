#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[50];
    int choice, count = 0, searchRoll;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> s[count].roll;
                cout << "Enter Name: ";
                cin >> s[count].name;
                cout << "Enter Marks: ";
                cin >> s[count].marks;
                count++;
                cout << "Student Added Successfully!\n";
                break;

            case 2:
                cout << "\nStudent Records:\n";
                for(int i = 0; i < count; i++) {
                    cout << "Roll: " << s[i].roll
                         << ", Name: " << s[i].name
                         << ", Marks: " << s[i].marks << endl;
                }
                break;

             case 3: {
              cout << "Enter Roll Number to Search: ";
              cin >> searchRoll;

              bool found = false;   // flag

              for(int i = 0; i < count; i++) {
                 if(s[i].roll == searchRoll) {
                   cout << "Student Found!\n";
                   cout << "Name: " << s[i].name
                     << ", Marks: " << s[i].marks << endl;
                   found = true;
                 break;
            }
        }

                 if(!found) {
                  cout << "Student not found!\n";
        }
         break;
}


            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}