//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_PERSON_H
#define PROJECT_FURUMA_TEST_PERSON_H

#include "../header.h"

class Person {
protected:
    string idCode;
    string namePerson;
    string dateofBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
public:
    Person(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAddress);

    Person();

    virtual void output() = 0;

};


#endif //PROJECT_FURUMA_TEST_PERSON_H
