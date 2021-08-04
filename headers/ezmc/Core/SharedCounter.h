#pragma once

#include <atomic>

template <typename T>
class SharedCounter {
public:
    T*               value;
    std::atomic<int> shared{}, weak{};

    inline SharedCounter(T* value)
        : value(value) {
    }

    inline void addSharedRef() {
        shared++;
    }
    inline bool releaseSharedRef() {
        T* temp;
        shared--;
        if (shared > 0)
            return false;
        if (value) {
            temp  = value;
            value = nullptr;
            delete temp;
        }
        return weak <= 0;
    }
    inline void addWeakRef() {
        weak++;
    }
    inline bool releaseWeakRef() {
        weak--;
        return weak <= 0 && value;
    }
};