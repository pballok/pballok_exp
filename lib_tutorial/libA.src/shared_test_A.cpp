#include <iostream>
#include "shared_test_A.h"

SharedTestA::SharedTestA() : SharedTest() {
    std::cout << "SharedTest_A constructor" << std::endl;
}

SharedTestA::~SharedTestA() {
    std::cout << "SharedTest_A destructor" << std::endl;
}

void SharedTestA::f() const {
    std::cout << "SharedTest_A function called" << std::endl;
}
