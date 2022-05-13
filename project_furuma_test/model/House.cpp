//
// Created by admin on 5/9/2022.
//

#include "House.h"

House::House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &rentalType, const string &standardHouse, int floor) : Facility(
        idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, rentalType), standardHouse(standardHouse),
                                                                                                      floor(floor) {}

House::House() {}

void House::output() {
    Facility::output();
    cout<<"House{ idFacility: "<<idFacility
    <<", nameService: "<<nameService
    <<", areaUse: "<<areaUse
    <<", rentalPrice: "<<rentalPrice
    <<", rentalMaxPeople: "<<rentalMaxPeople
    <<", rentalType: "<<rentalType
    <<", standardHouse: "<<standardHouse
    <<", floor: "<<floor
    <<"}"<<endl;
}
