//
// Created by admin on 5/13/2022.
//

#include "customerManagement.h"

void customerManagement::displayCustomerManagement() {
    while (1) {
        int a;
        cout << "choose: " << endl;
        cout << "1.\tDisplay list customers\n"
                "2.\tAdd new customer\n"
                "3.\tEdit customer\n"
                "4.\tReturn main menu" << endl;
        cin >> a;
        switch (a) {
            case 1: {
                break;
            }
            case 2: {
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                return;
                break;
            }
        }
    }
}
