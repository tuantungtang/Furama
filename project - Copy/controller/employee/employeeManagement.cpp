//
// Created by admin on 5/13/2022.
//

#include "employeeManagement.h"
#include "../controller.h"

void employeeManagement::displayEmployeeManagement() {
    while (1) {
        int a;
        cout << "1\tDisplay list employees\n"
                "2\tAdd new employee\n"
                "3\tEdit employee\n"
                "4\tReturn main menu" << endl;
        cout << "choose: " << endl;
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
                controller().displayMainMenu();
            }
        }
    }
}
