#ifndef SHARED_TEST_B_H
#define SHARED_TEST_B_H

#include <shared_test.h>

class SharedTestB : public SharedTest {
public:
    SharedTestB();
    ~SharedTestB();

    void f() const override;
};

#endif
