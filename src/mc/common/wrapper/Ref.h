#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    constexpr OwnerStorageSharePtr() noexcept = default;

    constexpr ~OwnerStorageSharePtr() = default;

    constexpr OwnerStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    constexpr OwnerStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr OwnerStorageSharePtr(std::shared_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    constexpr OwnerStorageSharePtr(OwnerStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    constexpr OwnerStorageSharePtr(OwnerStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    constexpr OwnerStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr OwnerStorageSharePtr& operator=(std::shared_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    constexpr OwnerStorageSharePtr& operator=(OwnerStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    template <class Y>
    constexpr OwnerStorageSharePtr& operator=(OwnerStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
        return *this;
    }

    constexpr void reset() { mHandle.reset(); }

    constexpr operator bool() const { return mHandle != nullptr; } // NOLINT

    constexpr T* get() const { return mHandle.get(); }

    constexpr T& operator*() const { return *get(); }

    constexpr T* operator->() const { return get(); }
};

template <typename T>
class StackResultStorageSharePtr {
public:
    std::shared_ptr<T> mHandle;

    constexpr StackResultStorageSharePtr() noexcept = default;

    constexpr ~StackResultStorageSharePtr() = default;

    constexpr StackResultStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    constexpr StackResultStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr StackResultStorageSharePtr(std::shared_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    constexpr StackResultStorageSharePtr(StackResultStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    constexpr StackResultStorageSharePtr(StackResultStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    constexpr StackResultStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr StackResultStorageSharePtr& operator=(std::shared_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    constexpr StackResultStorageSharePtr& operator=(StackResultStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    template <class Y>
    constexpr StackResultStorageSharePtr& operator=(StackResultStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
        return *this;
    }

    constexpr void reset() { mHandle.reset(); }

    constexpr operator bool() const { return mHandle != nullptr; } // NOLINT

    constexpr T* get() const { return mHandle.get(); }

    constexpr T& operator*() const { return *get(); }

    constexpr T* operator->() const { return get(); }
};

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

    constexpr WeakStorageSharePtr() noexcept = default;

    constexpr ~WeakStorageSharePtr() = default;

    constexpr WeakStorageSharePtr(std::nullptr_t) noexcept {}

    template <class Y>
    constexpr WeakStorageSharePtr(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr WeakStorageSharePtr(std::weak_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr WeakStorageSharePtr(std::weak_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    constexpr WeakStorageSharePtr(WeakStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    constexpr WeakStorageSharePtr(WeakStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    constexpr WeakStorageSharePtr& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr WeakStorageSharePtr& operator=(std::weak_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr WeakStorageSharePtr& operator=(std::weak_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    constexpr WeakStorageSharePtr& operator=(WeakStorageSharePtr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    template <class Y>
    constexpr WeakStorageSharePtr& operator=(WeakStorageSharePtr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
        return *this;
    }

    constexpr void reset() { mHandle.reset(); }

    constexpr bool expired() const { return mHandle.expired(); }

    constexpr StackResultStorageSharePtr<T> lock() const { return mHandle.lock(); }

    constexpr T* get() const {
        auto sp = mHandle.lock();
        if (!sp) {
            return nullptr;
        }
        return sp.get();
    }

    constexpr operator bool() const { return get() != nullptr; } // NOLINT

    constexpr T& operator*() const { return *get(); }

    constexpr T* operator->() const { return get(); }
};

template <typename T>
class SharedCounter {
public:
    constexpr explicit SharedCounter(T* p = nullptr) : ptr(p), share_count(1), weak_count(0) {}

    constexpr void addShareCount() { share_count++; }

    constexpr void addWeakCount() { weak_count++; }

    constexpr int getShareCount() const { return share_count.load(); }

    constexpr int getWeakCount() const { return weak_count.load(); }

    constexpr T* get() const { return ptr; }

    constexpr void release() {
        if (--share_count == 0) {
            delete ptr;
            ptr = nullptr;
            if (weak_count == 0) {
                delete this;
            }
        }
    }

    constexpr void releaseWeak() {
        if (--weak_count == 0 && share_count == 0) {
            delete this;
        }
    }

private:
    T*              ptr;
    std::atomic_int share_count;
    std::atomic_int weak_count;
};
