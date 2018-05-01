#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void student::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}
string student::fullName()
{
  firstName.append(" ");
  firstName.append(lastName);
  return firstName;
}
