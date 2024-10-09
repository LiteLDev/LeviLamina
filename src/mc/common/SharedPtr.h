#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/SharedCounter.h"

template <typename T>
class WeakPtr;

template <typename T>
class SharedPtr {
public:
    template <typename... Args>
    [[nodiscard]] static SharedPtr<T> make(Args&&... args) {
        return SharedPtr<T>(new T(std::forward<Args>(args)...));
    }

    [[nodiscard]] SharedPtr() noexcept : counter(nullptr) {}               // NOLINT
    [[nodiscard]] SharedPtr(std::nullptr_t) noexcept : counter(nullptr) {} // NOLINT

    [[nodiscard]] explicit SharedPtr(T* p) : counter(new SharedCounter<T>(p)) {}

    template <class Y>
    [[nodiscard]] explicit SharedPtr(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (counter) {
            counter->addShareCount();
        }
    }

    template <class Y>
    [[nodiscard]] explicit SharedPtr(SharedPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter       = (SharedCounter<T>*)other.counter;
        other.counter = nullptr;
    }

    template <class Y>
    [[nodiscard]] explicit SharedPtr(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (other) {
            counter->addShareCount();
        }
    }

    ~SharedPtr() {
        if (counter) {
            counter->release();
        }
    }

    template <class Y>
    SharedPtr<T>& operator=(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter = (SharedCounter<T>*)other.counter;
            if (counter) {
                counter->addShareCount();
            }
        }
        return *this;
    }

    template <class Y>
    SharedPtr<T>& operator=(SharedPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter       = (SharedCounter<T>*)other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    template <class Y>
    SharedPtr<T>& operator=(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (other) {
            counter->addShareCount();
        }
        return *this;
    }

    [[nodiscard]] T* get() const { return counter ? counter->get() : nullptr; }

    [[nodiscard]] T* operator->() const { return get(); }

    [[nodiscard]] T& operator*() const { return *get(); }

    [[nodiscard]] explicit operator bool() const { return get() != nullptr; }

    [[nodiscard]] int use_count() const { return counter ? counter->getShareCount() : 0; }

    void reset() {
        if (counter) {
            counter->release();
            counter = nullptr;
        }
    }

    SharedCounter<T>* counter;
};
