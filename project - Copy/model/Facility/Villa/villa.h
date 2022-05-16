//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_VILLA_H
#define TUANDOIT_VILLA_H
#include "../facility.h"

class villa:public facility {
private:
    string standardVilla;
    double areaPool;
    int floor;
public:
    villa(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
          const string &rentalMaxPeople, const string &styleRental, const string &standardVilla, double areaPool,
          int floor);

    villa();
    void input();
    void output();

    const string &getStandardVilla() const;

    void setStandardVilla(const string &standardVilla);

    double getAreaPool() const;

    void setAreaPool(double areaPool);

    int getFloor() const;

    void setFloor(int floor);
};


#endif //TUANDOIT_VILLA_H
