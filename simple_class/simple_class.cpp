#include <iostream>

class A {
public:
    A() { std::cout << "A default constructor\n"; }
    explicit A(int a) : a_(a) { std::cout << "A explicit constructor : " << a << '\n'; }
    A(const A& other) { std::cout << "A copy constructor " << a_ << " -> " << other.a_ << '\n'; a_ = other.a_; }
    A(A&& other) { std::cout << "A move constructor " << a_ << " -> " << other.a_ << '\n'; a_ = other.a_; }
    A& operator=(const A& other) { std::cout << "A copy assignment " << a_ << " -> " << other.a_ << '\n'; if(&other != this) a_ = other.a_; return *this; }
    A& operator=(A&& other) { std::cout << "A move assignment " << a_ << " -> " << other.a_ << '\n'; if(&other != this) a_ = other.a_; return *this; }
    virtual ~A() { std::cout << "A destructor : " << a_ << '\n'; }

private:
    int a_ = 0;
};

int main(int, char**) {
    A a;
    A b(42);
    A c(27);
    A d = b;

    return 0;
}
