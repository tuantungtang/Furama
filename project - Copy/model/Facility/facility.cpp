//
// Created by admin on 5/9/2022.
//

#include "facility.h"

facility::facility(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
                   const string &rentalMaxPeople, const string &styleRental) : idFacility(idFacility),
                                                                               nameService(nameService), areUse(areUse),
                                                                               rentalPrice(rentalPrice),
                                                                               rentalMaxPeople(rentalMaxPeople),
                                                                               styleRental(styleRental) {}

facility::facility() {}

void facility::output() {
cout<<"idFacility: "<<idFacility
<<", nameService: "<<nameService
<<", areUse: "<<areUse
<<", rentalPrice: "<<rentalPrice
<<", rentalMaxPeople: "<<rentalMaxPeople
<<", styleRent: "<<styleRental;
}

const string &facility::getIdFacility() const {
    return idFacility;
}

void facility::setIdFacility(const string &idFacility) {
    facility::idFacility = idFacility;
}

const string &facility::getNameService() const {
    return nameService;
}

void facility::setNameService(const string &nameService) {
    facility::nameService = nameService;
}

const string &facility::getAreUse() const {
    return areUse;
}

void facility::setAreUse(const string &areUse) {
    facility::areUse = areUse;
}

const string &facility::getRentalPrice() const {
    return rentalPrice;
}

void facility::setRentalPrice(const string &rentalPrice) {
    facility::rentalPrice = rentalPrice;
}

const string &facility::getRentalMaxPeople() const {
    return rentalMaxPeople;
}

void facility::setRentalMaxPeople(const string &rentalMaxPeople) {
    facility::rentalMaxPeople = rentalMaxPeople;
}

const string &facility::getStyleRental() const {
    return styleRental;
}

void facility::setStyleRental(const string &styleRental) {
    facility::styleRental = styleRental;
}
