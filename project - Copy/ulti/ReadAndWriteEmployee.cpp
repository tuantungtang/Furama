//
// Created by admin on 5/13/2022.
//

#include "ReadAndWriteEmployee.h"


list<employee> ReadAndWriteEmployee::readAllEmployee(string path) {
    list<employee> list;
    ifstream emin(path, ios_base::in);
    if (emin.is_open()) {
        cout << "ok";
        while (!emin.eof()) {
            string idCode;
            getline(emin, idCode, ',');
            string namePerson;
            getline(emin, namePerson, ',');
            string dateOfBirth;
            getline(emin, dateOfBirth, ',');
            string sex;
            getline(emin, sex, ',');
            string idPerson;
            getline(emin, idPerson, ',');
            string phoneNumber;
            getline(emin, phoneNumber, ',');
            string emailAddress;
            getline(emin, emailAddress, ',');
            string level;
            getline(emin, level, ',');
            string position;
            getline(emin, position, ',');
            float salary;
            emin >> salary;
            employee em(idCode, namePerson, dateOfBirth, sex,
                        idPerson, phoneNumber, emailAddress, level,
                        position, salary);
            list.push_back(em);
        }
        emin.close();
    } else {
        cout << "deo";
    }
    return list;
}

void ReadAndWriteEmployee::writeAllEmployee(string path, list<employee> list) {
ofstream emout(path,ios_base::out);
    if(emout.is_open()){
        cout<<"ok";
        for (employee e: list)
            emout << e.getIdCode() << "," << e.getNamePerson() << "," << e.getDateOfBirth() << "," << e.getSex() << ","
                  << e.getIdPerson() << ","
                  << e.getPhoneNumber() << "," << e.getEmailAddress() << "," << e.getLevel()<< "," << e.getPosition()
                  << ","
                  << e.getSalary();
    }else{
        cout<<"ko";
    }
    emout.close();
}
