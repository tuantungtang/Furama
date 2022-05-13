//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_CUSTOMER_H
#define PROJECT_FURUMA_TEST_CUSTOMER_H

#include "Person.h"
class Customer:public Person {
private:
string typeCustomer;
    string address;
public:
    Customer(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAddress, const string &typeCustomer,
             const string &address);

    Customer();

    void output() override;
};


#endif //PROJECT_FURUMA_TEST_CUSTOMER_H
