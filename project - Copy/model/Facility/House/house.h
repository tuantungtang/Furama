//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_HOUSE_H
#define TUANDOIT_HOUSE_H

#include "../facility.h"

class house : public facility {
private:
    string standardHouse;
    int floor;
public:
    house(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
          const string &rentalMaxPeople, const string &styleRental, const string &standardHouse, int floor);

    house();
    void input();
    void output();

    const string &getStandardHouse() const;

    void setStandardHouse(const string &standardHouse);

    int getFloor() const;

    void setFloor(int floor);
};


#endif //TUANDOIT_HOUSE_H
