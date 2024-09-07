#include "ll/core/LeviLamina.h"

#include "ll/api/base/Containers.h"

struct MyCompare {
    int operator()(int x, int y) { return y % 10 < x % 10; } // highest first
};

static bool run = [] {
    using namespace ll;


    std::vector<int> v{02, 10, 21, 30, 42, 51};

    std::cout << "132504 stable\n";

    /* ConcurrentPriorityQueue */ {
        ConcurrentPriorityQueue<int, MyCompare> cpq;
        for (int i : v) cpq.push(i);
        while (cpq.try_pop_if([](int& i) {
            std::cout << i / 10;
            return true;
        })) {}
        std::cout << " tbb\n";
    }

    /* std::priority_queue */ {
        std::priority_queue<int, std::vector<int>, MyCompare> pq;
        for (int i : v) pq.push(i);
        while (!pq.empty()) {
            std::cout << pq.top() / 10;
            pq.pop();
        }
        std::cout << " std\n";
    }

    return true;
}();
