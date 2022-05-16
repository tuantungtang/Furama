//
// Created by admin on 5/9/2022.
//

#include "house.h"

house::house(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
             const string &rentalMaxPeople, const string &styleRental, const string &standardHouse, int floor)
        : facility(idFacility, nameService, areUse, rentalPrice, rentalMaxPeople, styleRental),
          standardHouse(standardHouse), floor(floor) {}

house::house() {}

void house::output() {
    cout<<"House {";
    facility::output();
    cout<<", standardHouse: "<<standardHouse
    <<", floor: "<<floor<<"} "<<endl;

}

const string &house::getStandardHouse() const {
    return standardHouse;
}

void house::setStandardHouse(const string &standardHouse) {
    house::standardHouse = standardHouse;
}

int house::getFloor() const {
    return floor;
}

void house::setFloor(int floor) {
    house::floor = floor;
}
