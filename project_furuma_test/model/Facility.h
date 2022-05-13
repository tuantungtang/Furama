//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_FACILITY_H
#define PROJECT_FURUMA_TEST_FACILITY_H
#include "../header.h"

class Facility {
protected:
    string idFacility;
    string nameService;
    double areaUse;
    double rentalPrice;
    int rentalMaxPeople;
    string rentalType;
public:
    Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &rentalType);

    Facility();
virtual void output();
};


#endif //PROJECT_FURUMA_TEST_FACILITY_H
