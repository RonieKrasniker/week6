#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>
 using namespace std;
 void foo(int a, std::mutex &mtx) {   
    sleep(5);
    mtx.lock();

    cout << a << endl;
    mtx.unlock();
 }
 int main() {
    std::mutex mtx;

 thread threads[20];
    for (int i = 0; i < 20; i++){
        threads[i] = thread(foo, i, std::ref(mtx));
    }
    for (int i = 0; i < 20; i++){
        threads[i].join();
    } 
    return 0;
 }