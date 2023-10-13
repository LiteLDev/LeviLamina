#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T>
class WeakPtr;

template <typename T>
class SharedPtr {
public:
    SharedPtr() : counter(nullptr) {}

    explicit SharedPtr(T* p) : counter(new SharedCounter<T>(p)) {}

    template <class Y>
    explicit SharedPtr(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = other.counter;
        if (counter) { counter->addShareCount(); }
    }

    template <class Y>
    explicit SharedPtr(SharedPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter       = other.counter;
        other.counter = nullptr;
    }

    template <class Y>
    explicit SharedPtr(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = other.counter;
        if (other) { counter->addShareCount(); }
    }

    ~SharedPtr() {
        if (counter) { counter->release(); }
    }

    template <class Y>
    SharedPtr<T>& operator=(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) { counter->addShareCount(); }
        }
        return *this;
    }

    template <class Y>
    SharedPtr<T>& operator=(SharedPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != other.counter) {
            counter       = other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    template <class Y>
    SharedPtr<T>& operator=(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = other.counter;
        if (other) { counter->addShareCount(); }
    }

    T* operator->() const { return counter->get(); }

    T* get() const { return counter->get(); }

    T& operator*() const { return *(counter->get()); }

    explicit operator bool() const { return counter != nullptr; }

    [[nodiscard]] int use_count() const { return counter ? counter->getShareCount() : 0; }

    void reset() {
        counter->release();
        counter = nullptr;
    }

private:
    SharedCounter<T>* counter;

    friend class WeakPtr<T>;
};
