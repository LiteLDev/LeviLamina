#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/StackRefResult.h"

template <typename T>
class WeakRef {
public:
    std::weak_ptr<T> mHandle;

    constexpr WeakRef() noexcept = default;

    constexpr ~WeakRef() = default;

    constexpr WeakRef(std::nullptr_t) noexcept {}

    template <class Y>
    constexpr WeakRef(std::shared_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr WeakRef(std::weak_ptr<Y> const& ptr)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(ptr) {}
    template <class Y>
    constexpr WeakRef(std::weak_ptr<Y>&& ptr) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(ptr)) {}
    template <class Y>
    constexpr WeakRef(WeakRef<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    : mHandle(other.mHandle) {}
    template <class Y>
    constexpr WeakRef(WeakRef<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    : mHandle(std::move(other.mHandle)) {}

    template <class Y>
    constexpr WeakRef& operator=(std::shared_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr WeakRef& operator=(std::weak_ptr<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = other;
        return *this;
    }

    template <class Y>
    constexpr WeakRef& operator=(std::weak_ptr<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        mHandle = std::move(other);
        return *this;
    }

    template <class Y>
    constexpr WeakRef& operator=(WeakRef<Y> const& other)
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = other.mHandle;
        }
        return *this;
    }

    template <class Y>
    constexpr WeakRef& operator=(WeakRef<Y>&& other) noexcept
        requires(std::convertible_to<Y*, T*>)
    {
        if (this != &other) {
            mHandle = std::move(other.mHandle);
        }
        return *this;
    }

    constexpr void reset() { mHandle.reset(); }

    constexpr bool expired() const { return mHandle.expired(); }

    constexpr StackRefResult<T> lock() const { return mHandle.lock(); }

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
