//
// Created by admin on 5/9/2022.
//

#include "FuramaController.h"
#include "CustomerManagement.h"
#include "EmployeeManagement.h"

void FuramaController::displayMenu() {
    while(1){
        int n;
        cout << "1.CustomerManagement" << endl << "2.EmployeeManagement" << endl << "3.FacilityManagement" << endl
             << "4.BookingManagement" << endl << "5.PromotionManagement" << "6.Exit" << endl;
        cin >> n;
        switch (n) {
            case (1): {
                CustomerManagement().customerMenu();
                break;
            }
            case (2): {
                EmployeeManagement().customerMenu();
                break;
            }
            case (3): {
                break;
            }
            case (4): {
                break;
            }
            case (5): {
                break;
            }
            case (6): {
                exit(0);
                break;
            }
        }
    }
}
