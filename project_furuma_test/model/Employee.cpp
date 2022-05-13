//
// Created by admin on 5/9/2022.
//

#include "Employee.h"

Employee::Employee(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &level,
                   const string &position, float salary) : Person(idCode, namePerson, dateofBirth, sex, idPerson,
                                                                  phoneNumber, emailAddress), level(level),
                                                           position(position), salary(salary) {}

Employee::Employee() {}

void Employee::output() {
    cout<<"Employee { idCode: "<<idCode
        <<", namePerson: "<<namePerson
        <<", dateOfBirth: "<<dateofBirth
        <<", sex: "<<sex
        <<", idPerson"<<idPerson
        <<", phoneNumber: "<<phoneNumber
        <<", emailAddress: "<<emailAddress
        <<", level: "<<level
        <<", position: "<<position
        <<", salary: "<<salary<<"} "<<endl;
}
