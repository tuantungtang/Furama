//
// Created by admin on 5/9/2022.
//

#include "Room.h"

Room::Room() {}

Room::Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
           const string &rentalType, const string &freeService) : Facility(idFacility, nameService, areaUse,
                                                                           rentalPrice, rentalMaxPeople, rentalType),
                                                                  freeService(freeService) {}

void Room::output() {
    Facility::output();
    cout<<"dich vu mien phi: "<<freeService<<endl;
}
