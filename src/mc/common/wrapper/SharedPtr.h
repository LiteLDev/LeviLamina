#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T>
class WeakPtr;

template <typename T>
class SharedPtr {
public:
    template <typename... Args>
    static SharedPtr<T> makeShared(Args&&... args) {
        return SharedPtr<T>(new T(std::forward<Args>(args)...));
    }

    SharedPtr() noexcept : counter(nullptr) {}
    SharedPtr(std::nullptr_t) noexcept : counter(nullptr) {}

    explicit SharedPtr(T* p) : counter(new SharedCounter<T>(p)) {}

    template <class Y>
    explicit SharedPtr(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (counter) { counter->addShareCount(); }
    }

    template <class Y>
    explicit SharedPtr(SharedPtr<Y>&& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter       = (SharedCounter<T>*)other.counter;
        other.counter = nullptr;
    }

    template <class Y>
    explicit SharedPtr(WeakPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        counter = (SharedCounter<T>*)other.counter;
        if (other) { counter->addShareCount(); }
    }

    ~SharedPtr() {
        if (counter) { counter->release(); }
    }

    template <class Y>
    SharedPtr<T>& operator=(SharedPtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (counter != (SharedCounter<T>*)other.counter) {
            counter = (SharedCounter<T>*)other.counter;
            if (counter) { counter->addShareCount(); }
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
        if (other) { counter->addShareCount(); }
        return *this;
    }

    T* get() const { return counter ? counter->get() : nullptr; }

    T* operator->() const { return get(); }

    T& operator*() const { return *get(); }

    explicit operator bool() const { return get() != nullptr; }

    [[nodiscard]] int use_count() const { return counter ? counter->getShareCount() : 0; }

    void reset() {
        if (counter) {
            counter->release();
            counter = nullptr;
        }
    }

private:
    SharedCounter<T>* counter;

    friend class WeakPtr<T>;
};
