#pragma once

#include <utility>

#include "SharedCounter.h"

template <typename T>
class SharedPtr {
public:
    SharedCounter<T>* counter{};

    inline SharedPtr(T* inp)
        : counter{new SharedCounter<T>(inp)} {
        counter->addSharedRef();
    }
    template <typename... ps>
    static inline SharedPtr make(ps&&... p) {
        return {new T{std::forward<ps>(p)...}};
    }
    inline operator bool() const {
        return counter && counter->value;
    }
    inline T& operator*() {
        return *counter->value;
    }
    inline T* operator->() {
        return counter->value;
    }
    inline T* get() const {
        return counter->value;
    }
    inline void reset() {
        if (counter) {
            if (counter->releaseSharedRef())
                delete counter;
            counter = nullptr;
        }
    }
    ~SharedPtr() {
        reset();
    }
};