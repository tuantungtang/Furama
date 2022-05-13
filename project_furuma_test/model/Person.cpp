//
// Created by admin on 5/9/2022.
//

#include "Person.h"

Person::Person(const string &idCode, const string &namePerson, const string &dateofBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAddress) : idCode(idCode),
                                                                                                namePerson(namePerson),
                                                                                                dateofBirth(
                                                                                                        dateofBirth),
                                                                                                sex(sex),
                                                                                                idPerson(idPerson),
                                                                                                phoneNumber(
                                                                                                        phoneNumber),
                                                                                                emailAddress(
                                                                                                        emailAddress) {}

Person::Person() {}
