//
// Created by admin on 5/13/2022.
//

#ifndef TUANDOIT_READANDWRITEEMPLOYEE_H
#define TUANDOIT_READANDWRITEEMPLOYEE_H
#include "../header.h"
#include "../model/Person/customer/customer.h"
#include "../model/Person/employee/employee.h"


class ReadAndWriteEmployee {
public:
    list<employee> readAllEmployee(string path);
    void writeAllEmployee(string path,list<employee>);
};


#endif //TUANDOIT_READANDWRITEEMPLOYEE_H
