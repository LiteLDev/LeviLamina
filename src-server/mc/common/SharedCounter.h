#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
