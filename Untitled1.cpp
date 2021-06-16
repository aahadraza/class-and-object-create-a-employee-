#include<iostream>
#include<conio.h>

class Employee
{
public:
int salary  // data member
void sal()
{
  cout<<"Enter salary: ";
  cin>>salary;
  cout<<"Salary: "<<salary;
}
};
 void main()
 {
  clrscr();
  Employee e; //creating an object of Employee
  e.sal();
  getch();