//
// Created by admin on 5/9/2022.
//

#ifndef TUANDOIT_FACILITY_H
#define TUANDOIT_FACILITY_H

#include "../../header.h"

class facility {
protected:
    string idFacility;
    string nameService;
    string areUse;
    string rentalPrice;
    string rentalMaxPeople;
    string styleRental;
public:
    facility(const string &idFacility, const string &nameService, const string &areUse, const string &rentalPrice,
             const string &rentalMaxPeople, const string &styleRental);

    facility();

    virtual void output();

    const string &getIdFacility() const;

    void setIdFacility(const string &idFacility);

    const string &getNameService() const;

    void setNameService(const string &nameService);

    const string &getAreUse() const;

    void setAreUse(const string &areUse);

    const string &getRentalPrice() const;

    void setRentalPrice(const string &rentalPrice);

    const string &getRentalMaxPeople() const;

    void setRentalMaxPeople(const string &rentalMaxPeople);

    const string &getStyleRental() const;

    void setStyleRental(const string &styleRental);
};


#endif //TUANDOIT_FACILITY_H
