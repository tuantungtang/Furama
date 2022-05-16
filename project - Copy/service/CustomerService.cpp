//
// Created by admin on 5/13/2022.
//

#include "CustomerService.h"

void CustomerService::addCustomer(string path, list<customer> cus) {
ofstream cuson(path,ios_base::out);
if(cuson.is_open()){
    customer cus;
    cout<<"idPerson: ";
    string idPerson;
    cuson<<idPerson;
    cus.getIdCode();
    cus.setIdCode(idPerson);
}else{
  ;  cout<<"ko";
}
}
