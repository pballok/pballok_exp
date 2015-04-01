#include <iostream>

#include "shared_test_B.h"

SharedTestB::SharedTestB() : SharedTest() {
    std::cout << "SharedTest_B constructor" << std::endl;
}

SharedTestB::~SharedTestB() {
    std::cout << "SharedTest_B destructor" << std::endl;
}

void SharedTestB::f() const {
    std::cout << "SharedTest_B function called" << std::endl;
}
