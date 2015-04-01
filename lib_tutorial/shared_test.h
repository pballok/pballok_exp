#ifndef SHARED_TEST_H
#define SHARED_TEST_H

class SharedTest {
public:
    SharedTest() {}
    virtual ~SharedTest() {}

    virtual void f() const = 0;
};

#endif
