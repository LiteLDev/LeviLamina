#pragma once

#include "SharedPtr.h"

template <typename T>
class WeakPtr {
public:
    SharedCounter<T>* counter{};

    inline WeakPtr(SharedPtr<T> const& ref)
        : counter(ref.counter) {
        if (counter)
            counter->addWeakRef();
    }
    inline void reset() {
        if (counter) {
            if (counter->releaseWeakRef())
                delete counter;
            counter = nullptr;
        }
    }
    inline ~WeakPtr() {
        reset();
    }

    inline operator bool() const {
        return counter && counter->value;
    }
    inline T& operator*() {
        return *counter->value;
    }
    inline T const& operator*() const {
        return *counter->value;
    }
    inline T* operator->() {
        return counter->value;
    }
    inline T const* operator->() const {
        return counter->value;
    }
    inline T* get() const {
        return counter->value;
    }
};