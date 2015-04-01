#include <iostream>

#include "libA.src/shared_test_A.h"
#include "libB.src/shared_test_B.h"

int main(int, char**) {

    std::cout << "Which library do you want to use? A or B: ";
    std::string choice;
    std::cin >> choice;

    SharedTest* st;

    if(choice[0] == 'A' || choice[0] == 'a') st = new SharedTestA();
    else st = new SharedTestB();

    st->f();

    delete st;

    return 0;
}
