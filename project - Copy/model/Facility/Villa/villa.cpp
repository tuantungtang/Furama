//
// Created by admin on 5/9/2022.
//

#include "villa.h"

villa::villa(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
             const string &rentalMaxPeople, const string &styleRental, const string &standardVilla, double areaPool,
             int floor) : facility(idFacility, nameService, areUse, rentalPrice, rentalMaxPeople, styleRental),
                          standardVilla(standardVilla), areaPool(areaPool), floor(floor) {}

villa::villa() {}

void villa::output() {
    cout<<"Villa { ";
    facility::output();
    cout<<", standardVilla: "<<standardVilla
    <<", areaPool: "<<areaPool
    <<", floor: "<<floor<<"}"<<endl;
}

const string &villa::getStandardVilla() const {
    return standardVilla;
}

void villa::setStandardVilla(const string &standardVilla) {
    villa::standardVilla = standardVilla;
}

double villa::getAreaPool() const {
    return areaPool;
}

void villa::setAreaPool(double areaPool) {
    villa::areaPool = areaPool;
}

int villa::getFloor() const {
    return floor;
}

void villa::setFloor(int floor) {
    villa::floor = floor;
}
