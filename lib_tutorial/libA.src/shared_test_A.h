#ifndef SHARED_TEST_A_H
#define SHARED_TEST_A_H

#include <shared_test.h>

class SharedTestA : public SharedTest {
public:
    SharedTestA();
    ~SharedTestA();

    void f() const override;
};

#endif
