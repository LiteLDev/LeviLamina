#pragma once

#include <atomic>
#include <functional>

namespace ll::data {
class CancellableCallback {
    union F {
        std::function<void()> storage;
        ~F() {}
    } callback;
    struct Dtor {
        F& f;
        ~Dtor() { f.storage.~function(); }
    };
    std::atomic_bool available;

public:
    CancellableCallback(std::function<void()>&& callback) : callback{std::move(callback)}, available{true} {}

    bool cancel() {
        if (available.exchange(false)) {
            Dtor d{callback};
            return true;
        }
        return false;
    }

    ~CancellableCallback() { cancel(); }

    bool call() {
        if (available.exchange(false)) {
            Dtor d{callback};
            callback.storage();
            return true;
        }
        return false;
    }

    template <class F>
    bool moveTo(F&& f) {
        if (available.exchange(false)) {
            Dtor d{callback};
            return f(std::move(callback.storage));
        }
        return false;
    }
};
} // namespace ll::data
