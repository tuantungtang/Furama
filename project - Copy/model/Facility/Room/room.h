//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_ROOM_H
#define TUANDOIT_ROOM_H


#include "../facility.h"

class room: public facility {
private:
    string freeService;
public:
    room(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
         const string &rentalMaxPeople, const string &styleRental, const string &freeService);

    room();
    void input();
    void output();

    const string &getFreeService() const;

    void setFreeService(const string &freeService);
};


#endif //TUANDOIT_ROOM_H
