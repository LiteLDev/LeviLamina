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

    T* get() const {
        return mHandle.lock().get();
    }
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

    T* get() const {
        return mHandle.get();
    }
};

template <typename T>
class StackResultStorageSharePtr {
public:
    std::shared_ptr<T> mHandle;

    T* get() const {
        return mHandle.get();
    }
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
class SharedCounter {
public:
    explicit SharedCounter(T* p = nullptr) : ptr(p), share_count(1), weak_count(0) {}

    void addShareCount() {
        share_count++;
    }

    void addWeakCount() {
        weak_count++;
    }

    int getShareCount() const {
        return share_count.load();
    }

    int getWeakCount() const {
        return weak_count.load();
    }

    T* get() const {
        return ptr;
    }

    void reset() {
        ptr = nullptr;
        share_count = 0;
        weak_count = 0;
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
    T* ptr;
    std::atomic<int> share_count;
    std::atomic<int> weak_count;
};
