#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T>
class SharedPtr;

template <typename T>
class WeakPtr {
public:
    WeakPtr() noexcept : counter(nullptr) {}
    WeakPtr(std::nullptr_t) noexcept : counter(nullptr) {}

    template <class Y>
    explicit WeakPtr(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (counter) { counter->addWeakCount(); }
    }

    template <class Y>
    explicit WeakPtr(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (counter) { counter->addWeakCount(); }
    }

    template <class Y>
    explicit WeakPtr(WeakPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter       = (SharedCounter<T>*)other.counter;
        other.counter = nullptr;
    }

    ~WeakPtr() {
        if (counter) { counter->releaseWeak(); }
    }

    template <class Y>
    WeakPtr<T>& operator=(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter = (SharedCounter<T>*)other.counter;
            if (counter) { counter->addWeakCount(); }
        }
        return *this;
    }

    template <class Y>
    WeakPtr<T>& operator=(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter = (SharedCounter<T>*)other.counter;
            if (counter) { counter->addWeakCount(); }
        }
        return *this;
    }

    template <class Y>
    WeakPtr<T>& operator=(WeakPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter       = (SharedCounter<T>*)other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    [[nodiscard]] int use_count() const { return counter ? counter->getShareCount() : 0; }

    [[nodiscard]] bool expired() const { return use_count() == 0; }

    SharedPtr<T> lock() const { return expired() ? SharedPtr<T>() : SharedPtr<T>(*this); }

    T* get() const { return counter ? counter->get() : nullptr; }

    T* operator->() const { return get(); }

    T& operator*() const { return *get(); }

    explicit operator bool() const { return get() != nullptr; }

private:
    SharedCounter<T>* counter;

    friend class SharedPtr<T>;
};
