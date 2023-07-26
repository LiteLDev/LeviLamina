#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T>
class SharedPtr;

template <typename T>
class WeakPtr {
public:
    WeakPtr() : counter(nullptr) {}

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    explicit WeakPtr(const SharedPtr<Y>& other) {
        counter = other.counter;
        if (counter) {
            counter->addWeakCount();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    explicit WeakPtr(const WeakPtr<Y>& other) {
        counter = other.counter;
        if (counter) {
            counter->addWeakCount();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    explicit WeakPtr(WeakPtr<Y>&& other) {
        counter = other.counter;
        other.counter = nullptr;
    }

    ~WeakPtr() {
        if (counter) {
            counter->releaseWeak();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(const SharedPtr<Y>& other) {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) {
                counter->addWeakCount();
            }
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(const WeakPtr<Y>& other) {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) {
                counter->addWeakCount();
            }
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(WeakPtr<Y>&& other) {
        if (counter != other.counter) {
            counter = other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    [[nodiscard]] int use_count() const { return counter ? counter->getShareCount() : 0; }

    [[nodiscard]] bool expired() const { return use_count() == 0; }

    SharedPtr<T> lock() const {
        return expired() ? SharedPtr<T>() : SharedPtr<T>(*this);
    }

    T* operator->() const {
        return counter->get();
    }

    T* get() const {
        return counter->get();
    }

    T& operator*() const {
        return *(counter->get());
    }

    explicit operator bool() const { return expired(); }

private:
    SharedCounter<T>* counter;
};