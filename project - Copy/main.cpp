#include <iostream>
#include "model/Facility/facility.h"
#include "model/Facility/House/house.h"
#include"controller/controller.h"
#include "ulti/ReadAndWriteEmployee.h"
#include "ulti/ReadAndWriteCustomer.h"
#include "service/CustomerService.h"

int main() {
    CustomerService cusin;
    list<customer> cus;
    cusin.addCustomer("E:\\project\\data\\customer", cus);
}
