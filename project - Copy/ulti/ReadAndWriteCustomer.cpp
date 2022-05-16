//
// Created by admin on 5/13/2022.
//

#include "ReadAndWriteCustomer.h"


list<customer> ReadAndWriteCustomer::readAllCustomer(string path) {
    list<customer> list;
    ifstream cusin(path, ios_base::in);
    if (cusin.is_open()) {
        cout << "ok";
        string idCode;
        getline(cusin, idCode, ',');
        string namePerson;
        getline(cusin, namePerson, ',');
        string dateOfBirth;
        getline(cusin, dateOfBirth, ',');
        string sex;
        getline(cusin, sex, ',');
        string idPerson;
        getline(cusin, idPerson, ',');
        string phoneNumber;
        getline(cusin, phoneNumber, ',');
        string emailAddress;
        getline(cusin, emailAddress, ',');
        string typeCustomer;
        getline(cusin, typeCustomer, ',');
        string address;
        getline(cusin, address, ',');
        customer cus(idCode, namePerson, dateOfBirth, sex,
                     idPerson, phoneNumber, emailAddress,
                     typeCustomer, address);
    } else {
        cout << "cc";
    }
    cusin.close();
    return list;
}

void ReadAndWriteCustomer::writeAllCustomer(string path, list<customer> list) {
    ofstream cusout(path, ios_base::out);
    if (cusout.is_open()) {
        cout << "ghi dc";
        for (customer cus: list) {
            cusout << cus.getIdCode() << "," << cus.getNamePerson() << "," << cus.getDateOfBirth() << ","
                   << cus.getSex() << "," << cus.getIdPerson() << ","
                   << cus.getPhoneNumber() << "," << cus.getEmailAddress() << "," << cus.getTypeCustomer() << ","
                   << cus.getAddress();
        }
    } else {
        cout << "ko";
    }
    cusout.close();
}
