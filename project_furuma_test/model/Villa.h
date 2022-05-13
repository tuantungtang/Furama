//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_VILLA_H
#define PROJECT_FURUMA_TEST_VILLA_H
#include "Facility.h"

class Villa:public Facility {
private:
    string standardVilla;
    double areaPool;
    int floor;
public:
    Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &rentalType, const string &standardVilla, double areaPool, int floor);

    Villa();

    void output();
};


#endif //PROJECT_FURUMA_TEST_VILLA_H
