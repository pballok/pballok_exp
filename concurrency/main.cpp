#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>

std::mutex              m;
std::condition_variable cv;
std::string             s{};

void read_input() {
    std::string temp;
    while(std::cin >> temp) {
        std::unique_lock<std::mutex> lck{m};
        s = temp;
        cv.notify_one();
    }
}    
    
void write_output() {
    while(true) {
        std::unique_lock<std::mutex> lck{m};
        cv.wait(lck);
        std::cout << s << std::endl;
    }
}
    
int main(int, char**) {
        
    std::thread t1{read_input};
    std::thread t2{write_output};
    
    t1.join();
    t2.join();
    
    return 0;
}

