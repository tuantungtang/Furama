//
// Created by admin on 5/9/2022.
//

#include "Villa.h"

Villa::Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &rentalType, const string &standardVilla, double areaPool, int floor)
        : Facility(idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, rentalType),
          standardVilla(standardVilla), areaPool(areaPool), floor(floor) {}

Villa::Villa() {}

void Villa::output() {
    Facility::output();
    cout<<"tieu chuan: "<<standardVilla<<endl<<"dien tich ho boi: "<<areaPool<<endl<<"tang: "<<floor<<endl;
}
