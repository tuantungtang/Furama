cmake_minimum_required(VERSION 3.22)
project(project_furuma_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(project_furuma_test main.cpp model/Customer.cpp model/Customer.h model/Employee.cpp model/Employee.h model/Facility.cpp model/Facility.h model/House.cpp model/House.h model/Person.cpp model/Person.h model/Room.cpp model/Room.h model/Villa.cpp model/Villa.h header.h controller/FuramaController.cpp controller/FuramaController.h controller/CustomerManagement.cpp controller/CustomerManagement.h controller/EmployeeManagement.cpp controller/EmployeeManagement.h controller/FacilityManagement.cpp controller/FacilityManagement.h controller/BookingManagement.cpp controller/BookingManagement.h controller/PromotionManagement.cpp controller/PromotionManagement.h)
