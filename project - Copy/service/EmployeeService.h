//
// Created by admin on 5/13/2022.
//

#ifndef TUANDOIT_EMPLOYEESERVICE_H
#define TUANDOIT_EMPLOYEESERVICE_H
#include "../model/Person/employee/employee.h"

class EmployeeService {
public:
    list<employee> list;
    void display();
    void create();
    void edit();
};


#endif //TUANDOIT_EMPLOYEESERVICE_H
