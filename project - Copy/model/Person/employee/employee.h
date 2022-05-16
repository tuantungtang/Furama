//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_EMPLOYEE_H
#define TUANDOIT_EMPLOYEE_H

#include "../Person.h"

class employee: public Person{
private:
    string level;
    string position;
    float salary;
public:
    employee(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, string emailAddress, const string &level,
             const string &position, float salary);

    employee();
    void output() override;

    const string &getLevel() const;

    void setLevel(const string &level);

    const string &getPosition() const;

    void setPosition(const string &position);

    float getSalary() const;

    void setSalary(float salary);
};


#endif //TUANDOIT_EMPLOYEE_H
