//
// Created by admin on 5/9/2022.
//

#include "controller.h"
#include "employee/employeeManagement.h"
#include "customer/customerManagement.h"
#include "promotion/promotionManagement.h"
void controller::displayMainMenu() {
    cout << "1.\tEmployee Management\n"
            "2.\tCustomer Management\n"
            "3.\tFacility Management \n"
            "4.\tBooking Management\n"
            "5.\tPromotion Management\n"
            "6.\tExit" << endl;
    while (1) {
        int n;
        cout << "choose: ";
        cin >> n;
        switch (n) {
            case 1: {
                employeeManagement employ;
                employ.displayEmployeeManagement();
                break;
            }
            case 2: {
                customerManagement cus;
                cus.displayCustomerManagement();
                break;
            }
            case 3: {
                facilityManagement faci;
                faci.displayFacilityManagement();
                break;
            }
            case 4: {
                bookingManagement book;
                book.displayBookingManagement();
                break;
            }
            case 5: {
                promotionManagement promo;
                promo.displayPromotionManagement();
                break;
            }
            case 6: {
                exit(0);
                break;
            }
        }
    }
}
