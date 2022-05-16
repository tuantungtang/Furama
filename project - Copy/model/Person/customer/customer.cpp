//
// Created by admin on 5/9/2022.
//

#include "customer.h"

customer::customer(const string &idCode, const string &namePerson, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAddress,
                   const string &typeCustomer, const string &address) : Person(idCode, namePerson, dateOfBirth, sex,
                                                                               idPerson, phoneNumber, emailAddress),
                                                                        typeCustomer(typeCustomer), address(address) {}

customer::customer() {}

void customer::output() {
    cout<<"employee { idCode: "<<idCode
        <<", namePerson: "<<namePerson
        <<", dateOfBirth: "<<dateOfBirth
        <<", sex: "<<sex
        <<", idPerson: "<<idPerson
        <<", phoneNumber: "<<phoneNumber
        <<", emailAddress: "<<emailAddress
        <<", typeCustomer: "<<typeCustomer
        <<", address: "<<address<<"}"<<endl;
}

const string &customer::getTypeCustomer() const {
    return typeCustomer;
}

void customer::setTypeCustomer(const string &typeCustomer) {
    customer::typeCustomer = typeCustomer;
}

const string &customer::getAddress() const {
    return address;
}

void customer::setAddress(const string &address) {
    customer::address = address;
}
