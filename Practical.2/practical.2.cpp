#include<iostream> 
#include<string> 
using namespace std; 
class Student 
{ 
private: 
 int rollNumber; 
 string name; 
 string course; 
 int admissionYear; 
public: 
 // Function to input student data 
 void inputDetails() 
 { 
 cout << "Enter Roll Number: "; 
 cin >> rollNumber; 
 cin.ignore(); 
 cout << "Enter Name: "; 
 getline(cin, name); 
 cout << "Enter Course: "; 
 getline(cin, course); 
 cout << "Enter Admission Year: "; 
 cin >> admissionYear; 
 cout << "---------------------\n"; 
 } 
 // Function to display student data 
 void displayDetails() const 
 { 
 cout << "Roll Number: " << rollNumber << "\n"; 
 cout << "Name: " << name << "\n"; 
 cout << "Course: " << course << "\n"; 
 cout << "Admission Year: " << admissionYear << "\n"; 
 cout << "---------------------\n"; 
 } 
 // Function to get Roll Number 
 int getRollNumber() const 
 { 
 return rollNumber; 
 } 
}; 
int main() 
{ 
 const int MAX_STUDENTS = 100; 
 // Array of Student objects 
 Student database[MAX_STUDENTS]; 
 // Variable to keep track of the number of students  int currentCount = 0; 
 int choice; 
 cout << "=== College Record Digitization System ===\n"; 
 do 
 { 
 // Display menu 
 cout << "\n1. Add New Student Record\n"; 
 cout << "2. Display All Student Records\n"; 
 cout << "3. Search Student by Roll Number\n"; 
 cout << "4. Exit\n"; 
 cout << "Enter your choice: "; 
 cin >> choice; 
 cout << "\n"; 
 switch (choice) 
 { 
 // Add a new student record 
 case 1: 
 if (currentCount < MAX_STUDENTS) 
 { 
 cout << "--- Enter Details for Student "  << currentCount + 1 << " ---\n"; 
 // Store student details 
 database[currentCount].inputDetails(); 
 // Increase the number of student records  currentCount++; 
 cout << "Record saved successfully!\n";  } 
 else 
 { 
 cout << "Database full! Cannot add more records.\n";  } 
 break; 
 // Display all student records 
 case 2: 
 if (currentCount == 0) 
 { 
 cout << "No student records available.\n";  } 
 else 
 { 
 cout << "--- Total Student Records ---\n"; 
 // Display each student record 
 for (int i = 0; i < currentCount; i++)  { 
 database[i].displayDetails(); 
 } 
 } 
 break; 
 // Search for a student using Roll Number 
 case 3: 
 { 
 if (currentCount == 0) 
 { 
 cout << "No student records available to search.\n"; 
 break; 
 } 
 int searchRoll; 
 bool found = false; 
 cout << "Enter Roll Number to search: "; 
 cin >> searchRoll; 
 cout << "\n"; 
 // Search through the student records 
 for (int i = 0; i < currentCount; i++) 
 { 
 if (database[i].getRollNumber() == searchRoll)  { 
 cout << "--- Record Found ---\n";
 database[i].displayDetails(); 
 found = true; 
 // Stop searching after finding the student  break; 
 } 
 } 
 // Display message if student is not found  if (found == false) 
 { 
 cout << "Student with Roll Number " 
 << searchRoll << " not found.\n";  } 
 break; 
 } 
 // Exit the program 
 case 4: 
 cout << "Exiting system. Goodbye!\n"; 
 break; 
 // Invalid choice 
 default: 
 cout << "Invalid choice! Please choose between 1 and 4.\n";  } 
 } 
 while (choice != 4); 
 return 0; 
} 






OUTPUT=

=== College Record Digitization System ===

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit

Enter your choice: 1

--- Enter Details for Student 1 ---
Enter Roll Number: 101
Enter Name: Jane Doe
Enter Course: Computer Science
Enter Admission Year: 2026
---------------------
Record saved successfully!

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 3

Enter Roll Number to search: 101

--- Record Found ---
Roll Number: 101
Name: Jane Doe
Course: Computer Science
Admission Year: 2026
---------------------

1. Add New Student Record
2. Display All Student Records
3. Search Student by Roll Number
4. Exit
Enter your choice: 4

Exiting system. Goodbye!
                
