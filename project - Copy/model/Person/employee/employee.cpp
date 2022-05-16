//
// Created by admin on 5/9/2022.
//

#include "employee.h"

employee::employee(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, string emailAddress, const string &level,
                   const string &position, float salary) : Person(idCode, namePerson, dateOfBirth, sex, idPerson,
                                                                  phoneNumber, emailAddress), level(level),
                                                           position(position), salary(salary) {}

employee::employee() {}

void employee::output() {
    cout<<"employee { idCode: "<<idCode
    <<", namePerson: "<<namePerson
    <<", dateOfBirth: "<<dateOfBirth
    <<", sex: "<<sex
    <<", idPerson: "<<idPerson
    <<", phoneNumber: "<<phoneNumber
    <<", emailAddress: "<<emailAddress
    <<", level: "<<level
    <<", position: "<<position
    <<", salary: "<<salary<<"}"<<endl;
}

const string &employee::getLevel() const {
    return level;
}

void employee::setLevel(const string &level) {
    employee::level = level;
}

const string &employee::getPosition() const {
    return position;
}

void employee::setPosition(const string &position) {
    employee::position = position;
}

float employee::getSalary() const {
    return salary;
}

void employee::setSalary(float salary) {
    employee::salary = salary;
}
