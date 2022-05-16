//
// Created by admin on 5/9/2022.
//

#include "room.h"

room::room(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
           const string &rentalMaxPeople, const string &styleRental, const string &freeService) : facility(idFacility,
                                                                                                           nameService,
                                                                                                           areUse,
                                                                                                           rentalPrice,
                                                                                                           rentalMaxPeople,
                                                                                                           styleRental),
                                                                                                  freeService(
                                                                                                          freeService) {}

room::room() {}

void room::output() {
    cout<<"Room {";
    facility::output();
    cout<<", freeService: "<<freeService<<"} "<<endl;
}

const string &room::getFreeService() const {
    return freeService;
}

void room::setFreeService(const string &freeService) {
    room::freeService = freeService;
}
