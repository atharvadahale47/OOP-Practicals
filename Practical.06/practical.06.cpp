#include <iostream>
using namespace std; 
class Employee 
{ 
private: 
 int emp_id; 
 string name; 

public: 
 // Constructor 
 Employee(int id, string n) 
 { 
 emp_id = id; 
 name = n; 
 cout << "Employee record created for " << name << endl; 
 } 
 // Display employee details 
 void display() 
 { 
 cout << "Employee ID: " << emp_id << endl; 
 cout << "Employee Name: " << name << endl; 
 } 
 // Destructor 
 ~Employee() 
 { 
 cout << "Employee record removed for " << name << endl; 
 } 
}; 
int main() 
{ 
 // Creating an employee object 
 Employee emp(101, "Anjali"); 
 // Displaying employee details 
 emp.display(); 
 // Object is automatically destroyed when main() ends 
 return 0; 
} 



OUTPUT=

Employee record created for Anjali
Employee ID: 101 
Employee Name: Anjali 
Employee record removed for Anjali

