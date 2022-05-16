//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_PERSON_H
#define TUANDOIT_PERSON_H

#include "../../header.h"

class Person {
protected:
    string idCode;
    string namePerson;
    string dateOfBirth;
    string sex;
    string idPerson;
    string phoneNumber;
    string emailAddress;
public:
    Person(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAddress);

    Person();
    virtual void output()=0;

    const string &getIdCode() const;

    void setIdCode(const string &idCode);

    const string &getNamePerson() const;

    void setNamePerson(const string &namePerson);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    const string &getSex() const;

    void setSex(const string &sex);

    const string &getIdPerson() const;

    void setIdPerson(const string &idPerson);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAddress() const;

    void setEmailAddress(const string &emailAddress);
};


#endif //TUANDOIT_PERSON_H
