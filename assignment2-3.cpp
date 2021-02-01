//Write a program that calculates and displays an employee’s total wages for the week.

//The regular hours for the work week are 40,
//and any hours worked over 40 are considered overtime.

//The employee earns $18.25 per hour for regular hours and $27.78 per hour for overtime hours.

//The employee has worked 50 hours this week.

#include <iostream>
using namespace std;

int main()
{
  double work_hours = 50;
  double regular_hours = 40;
  double regular_rate = 18.25;
  double overtime_rate = 27.78;
  double overtime_hours = work_hours - regular_hours;

  double regular_pay = regular_hours * regular_rate;
  double overtime_pay = overtime_hours * overtime_rate;
  double total_pay = regular_pay + overtime_pay;

  cout << "The employee's regular wages are $" << regular_pay << ".\n";
  cout << "The employee's overtime wages are $" << overtime_pay << ".\n";
  cout << "The employee's total wages are $" << total_pay << ".\n";
  return 0;
}
