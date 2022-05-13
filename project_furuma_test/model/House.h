//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_HOUSE_H
#define PROJECT_FURUMA_TEST_HOUSE_H
#include "Facility.h"

class House:public Facility {
private:
    string standardHouse;
    int floor;
public:
    House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &rentalType, const string &standardHouse, int floor);


    House();

void output()override;
};


#endif //PROJECT_FURUMA_TEST_HOUSE_H
