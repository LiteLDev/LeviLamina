#pragma once
#include <memory>

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
};

template <typename T>
class StackResultStorageSharePtr {
public:
    std::shared_ptr<T> mHandle;
};

template <typename T>
struct SharePtrRefTraits {
public:
    using StackRef = T;
    using WeakStorage = WeakStorageSharePtr<StackRef>;
    using OwnerStorage = OwnerStorageSharePtr<StackRef>;
    using OwnerStackRef = StackRef;
    using StackResultStorage = StackResultStorageSharePtr<OwnerStackRef>;
};

template <typename T>
class WeakRefT : public T::WeakStorage {};

template <typename T>
class OwnerPtrT : public T::OwnerStorage {};

template <typename T>
class StackRefResultT : public T::StackResultStorage {
public:
    using StackRef = typename T::StackRef;
};

template <typename T>
class SharedCounter {
public:
    T* ptr;
    std::atomic<int> share_count;
    std::atomic<int> weak_count;

    SharedCounter(T* ptr) : ptr(ptr) {}

    SharedCounter(T&) : ptr(&ptr) {}

    constexpr T* get() {
        return ptr;
    }

    constexpr T const* get() const {
        return ptr;
    }
};

template <typename T>
class WeakPtr {
public:
    SharedCounter<T>* value;

public:
    WeakPtr(T* ptr) : value(new SharedCounter(ptr)) {}

    WeakPtr(T& ptr) : value(new SharedCounter(ptr)) {}

    ~WeakPtr() {
        delete value;
    }

    constexpr T* get() {
        if (value)
            return value->get();
        return nullptr;
    }

    constexpr T const* get() const {
        if (value)
            return value->get();
        return nullptr;
    }

    constexpr T* operator->() {
        return get();
    }

    constexpr T const* operator->() const {
        return get();
    }

    constexpr T& operator*() {
        return *get();
    }

    constexpr T const& operator*() const {
        return *get();
    }

    constexpr operator bool() const {
        return get() != nullptr;
    }
};

template <typename T>
class SharedPtr {
public:
    SharedCounter<T>* value;

public:
    SharedPtr(T* ptr) : value(new SharedCounter(ptr)) {}

    SharedPtr(T& ptr) : value(new SharedCounter(ptr)) {}

    ~SharedPtr() {
        delete value;
    }

    constexpr T* get() {
        if (value)
            return value->get();
        return nullptr;
    }

    constexpr T const* get() const {
        if (value)
            return value->get();
        return nullptr;
    }

    constexpr T* operator->() {
        return get();
    }

    constexpr T const* operator->() const {
        return get();
    }

    constexpr T& operator*() {
        return *get();
    }

    constexpr T const& operator*() const {
        return *get();
    }

    constexpr operator bool() const {
        return get() != nullptr;
    }
};