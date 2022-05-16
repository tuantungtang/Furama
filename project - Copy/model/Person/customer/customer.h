//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_CUSTOMER_H
#define TUANDOIT_CUSTOMER_H

#include"../Person.h"
class customer:public Person {
private:
    string typeCustomer;
    string address;
public:
    customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
             const string &address);

    customer();
    void input();
    void output();

    const string &getTypeCustomer() const;

    void setTypeCustomer(const string &typeCustomer);

    const string &getAddress() const;

    void setAddress(const string &address);
};


#endif //TUANDOIT_CUSTOMER_H
