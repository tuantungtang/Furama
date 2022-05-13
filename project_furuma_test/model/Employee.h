//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_EMPLOYEE_H
#define PROJECT_FURUMA_TEST_EMPLOYEE_H
#include "Person.h"

class Employee:public Person {
private:
    string level;
    string position;
    float salary;
public:
    Employee(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &level,
             const string &position, float salary);

    Employee();

    void output();
};


#endif //PROJECT_FURUMA_TEST_EMPLOYEE_H
