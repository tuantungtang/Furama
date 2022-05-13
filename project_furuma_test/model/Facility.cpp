//
// Created by admin on 5/9/2022.
//

#include "Facility.h"


Facility::Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
                   int rentalMaxPeople, const string &rentalType) : idFacility(idFacility), nameService(nameService),
                                                                    areaUse(areaUse), rentalPrice(rentalPrice),
                                                                    rentalMaxPeople(rentalMaxPeople),
                                                                    rentalType(rentalType) {}

Facility::Facility() {}

void Facility::output() {

}
