//
// Created by admin on 5/13/2022.
//

#ifndef TUANDOIT_READANDWRITECUSTOMER_H
#define TUANDOIT_READANDWRITECUSTOMER_H
#include "../header.h"
#include <list>
#include "../model/Person/employee/employee.h"
#include "../model/Person/customer/customer.h"

class ReadAndWriteCustomer {
public:
    list<customer> readAllCustomer(string path);
    void writeAllCustomer(string path,list<customer>);
};


#endif //TUANDOIT_READANDWRITECUSTOMER_H
