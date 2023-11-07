#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T>
class WeakStorageSharePtr {
public:
    enum class VariadicInit : int {
        NonAmbiguous = 0,
    };
    enum class EmptyInit : int {
        NoValue = 0,
    };
    std::weak_ptr<T> mHandle;

    WeakStorageSharePtr() noexcept = default;

    ~WeakStorageSharePtr() = default;

    WeakStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    WeakStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    WeakStorageSharePtr(std::weak_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    WeakStorageSharePtr(std::weak_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    WeakStorageSharePtr(WeakStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    WeakStorageSharePtr(WeakStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    WeakStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    WeakStorageSharePtr& operator=(std::weak_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    WeakStorageSharePtr& operator=(std::weak_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    WeakStorageSharePtr& operator=(WeakStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = other.mHandle; }
        return *this;
    }

    template <class Y>
    WeakStorageSharePtr& operator=(WeakStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = std::move(other.mHandle); }
        return *this;
    }

    void reset() { mHandle.reset(); }

    bool expired() const { return mHandle.expired(); }

    T* get() const {
        auto sp = mHandle.lock();
        if (!sp) { return nullptr; }
        return sp.get();
    }

    T* operator->() const { return get(); }
};

template <typename T>
class OwnerStorageSharePtr {
public:
    enum class VariadicInit : int {
        NonAmbiguous = 0,
    };
    enum class EmptyInit : int {
        NoValue = 0,
    };
    std::shared_ptr<T> mHandle;

    OwnerStorageSharePtr() noexcept = default;

    ~OwnerStorageSharePtr() = default;

    OwnerStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    OwnerStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    OwnerStorageSharePtr(std::shared_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    OwnerStorageSharePtr(OwnerStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    OwnerStorageSharePtr(OwnerStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    OwnerStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    OwnerStorageSharePtr& operator=(std::shared_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    OwnerStorageSharePtr& operator=(OwnerStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = other.mHandle; }
        return *this;
    }

    template <class Y>
    OwnerStorageSharePtr& operator=(OwnerStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = std::move(other.mHandle); }
        return *this;
    }

    void reset() { mHandle.reset(); }

    bool isNull() const { return !mHandle; }

    T* get() const { return mHandle.get(); }

    T* operator->() const { return get(); }
};

template <typename T>
class StackResultStorageSharePtr {
public:
    std::shared_ptr<T> mHandle;

    StackResultStorageSharePtr() noexcept = default;

    ~StackResultStorageSharePtr() = default;

    StackResultStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    StackResultStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    StackResultStorageSharePtr(std::shared_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    StackResultStorageSharePtr(StackResultStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    StackResultStorageSharePtr(StackResultStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    StackResultStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    StackResultStorageSharePtr& operator=(std::shared_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    StackResultStorageSharePtr& operator=(StackResultStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = other.mHandle; }
        return *this;
    }

    template <class Y>
    StackResultStorageSharePtr& operator=(StackResultStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) { mHandle = std::move(other.mHandle); }
        return *this;
    }

    void reset() { mHandle.reset(); }

    bool isNull() const { return !mHandle; }

    T* get() const { return mHandle.get(); }

    T* operator->() const { return get(); }
};

template <typename T>
class SharedCounter {
public:
    explicit SharedCounter(T* p = nullptr) : ptr(p), share_count(1), weak_count(0) {}

    void addShareCount() { share_count++; }

    void addWeakCount() { weak_count++; }

    int getShareCount() const { return share_count.load(); }

    int getWeakCount() const { return weak_count.load(); }

    T* get() const { return ptr; }

    void release() {
        if (--share_count == 0) {
            delete ptr;
            ptr = nullptr;
            if (weak_count == 0) { delete this; }
        }
    }

    void releaseWeak() {
        if (--weak_count == 0) { delete this; }
    }

private:
    T*              ptr;
    std::atomic_int share_count;
    std::atomic_int weak_count;
};
