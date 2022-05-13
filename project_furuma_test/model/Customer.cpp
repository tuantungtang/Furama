//
// Created by admin on 5/9/2022.
//

#include "Customer.h"

Customer::Customer(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAddress,
                   const string &typeCustomer, const string &address) : Person(idCode, namePerson, dateofBirth, sex,
                                                                               idPerson, phoneNumber, emailAddress),
                                                                        typeCustomer(typeCustomer), address(address) {}

Customer::Customer() {}

void Customer::output() {
    cout<<"Customer{ idCode: "<<idCode
    <<", namePerson: "<<namePerson
    <<", dateOfBirth: "<<dateofBirth
    <<", sex: "<<sex
    <<", idPerson"<<idPerson
    <<", phoneNumber: "<<phoneNumber
    <<", emailAddress: "<<emailAddress
    <<", typeCustomer: "<<typeCustomer
    <<", address: "<<address<<"}"<<endl;
}
