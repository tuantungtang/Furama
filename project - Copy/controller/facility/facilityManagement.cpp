//
// Created by admin on 5/13/2022.
//

#include "facilityManagement.h"
#include "../../header.h"

void facilityManagement::displayFacilityManagement() {
    while (1) {
        int a;
        cout << "choose: ";
        cout << "1\tDisplay list facility\n"
                "2\tAdd new facility\n"
                "3\tDisplay list facility maintenance\n"
                "4\tReturn main menu" << endl;
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
