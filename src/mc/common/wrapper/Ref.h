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

    WeakStorageSharePtr() = default;
    WeakStorageSharePtr(const std::shared_ptr<T>& ptr) : mHandle(ptr) {}
    WeakStorageSharePtr(const WeakStorageSharePtr& other) : mHandle(other.mHandle) {}
    WeakStorageSharePtr(WeakStorageSharePtr&& other) noexcept : mHandle(std::move(other.mHandle)) {}

    ~WeakStorageSharePtr() = default;

    WeakStorageSharePtr& operator=(const WeakStorageSharePtr& other) {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    WeakStorageSharePtr& operator=(WeakStorageSharePtr&& other) noexcept {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
        return *this;
    }

    void reset() { mHandle.reset(); }

    bool expired() const { return mHandle.expired(); }

    T* get() const {
        auto sp = mHandle.lock();
        if (!sp) {
            return nullptr;
        }
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

    OwnerStorageSharePtr() = default;
    OwnerStorageSharePtr(const std::shared_ptr<T>& ptr) : mHandle(ptr) {}
    OwnerStorageSharePtr(const OwnerStorageSharePtr& other) : mHandle(other.mHandle) {}
    OwnerStorageSharePtr(OwnerStorageSharePtr&& other) noexcept : mHandle(std::move(other.mHandle)) {}

    ~OwnerStorageSharePtr() = default;

    OwnerStorageSharePtr& operator=(const OwnerStorageSharePtr& other) {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    OwnerStorageSharePtr& operator=(OwnerStorageSharePtr&& other) noexcept {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
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

    StackResultStorageSharePtr() = default;
    StackResultStorageSharePtr(const std::shared_ptr<T>& ptr) : mHandle(ptr) {}
    StackResultStorageSharePtr(const StackResultStorageSharePtr& other) : mHandle(other.mHandle) {}
    StackResultStorageSharePtr(StackResultStorageSharePtr&& other) noexcept : mHandle(std::move(other.mHandle)) {}

    ~StackResultStorageSharePtr() = default;

    StackResultStorageSharePtr& operator=(const StackResultStorageSharePtr& other) {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    StackResultStorageSharePtr& operator=(StackResultStorageSharePtr&& other) noexcept {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
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

    void reset() {
        ptr         = nullptr;
        share_count = 0;
        weak_count  = 0;
    }

    void release() {
        if (--share_count == 0) {
            delete ptr;
            ptr = nullptr;
            releaseWeak();
        }
    }

    void releaseWeak() {
        if (--weak_count == 0) {
            delete this;
        }
    }

private:
    T*               ptr;
    std::atomic_int share_count;
    std::atomic_int weak_count;
};
