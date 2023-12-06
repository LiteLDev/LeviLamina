#pragma once

#include <shared_mutex>

#include "ll/api/base/StdInt.h"

namespace ll::thread {
class SharedRecursiveMutex : public std::shared_mutex {
public:
    void lock() {
        std::thread::id this_id = std::this_thread::get_id();
        if (owner == this_id) {
            // recursive locking
            count++;
        } else {
            // normal locking
            shared_mutex::lock();
            owner = this_id;
            count = 1;
        }
    }
    void unlock() {
        if (count > 1) {
            // recursive unlocking
            count--;
        } else {
            // normal unlocking
            owner = std::thread::id();
            count = 0;
            shared_mutex::unlock();
        }
    }

private:
    std::atomic<std::thread::id> owner;
    uint                         count;
};
} // namespace ll::thread
