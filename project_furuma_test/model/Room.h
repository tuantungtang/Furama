//
// Created by admin on 5/9/2022.
//

#ifndef PROJECT_FURUMA_TEST_ROOM_H
#define PROJECT_FURUMA_TEST_ROOM_H
#include "Facility.h"

class Room:public Facility {
private:
    string freeService;
public:
    Room();

    Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
         const string &rentalType, const string &freeService);

    void output();
};


#endif //PROJECT_FURUMA_TEST_ROOM_H
