//
// Created by admin on 5/13/2022.
//

#include "promotionManagement.h"

void promotionManagement::displayPromotionManagement() {
    while (1) {
        int a;
        cout << "choose";
        cout << "1.\tDisplay list customers use service\n"
                "2.\tDisplay list customers get voucher\n"
                "3.\tReturn main menu" << endl;
        cin >> a;
        switch (a) {
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                return;
            }
        }
    }
}
