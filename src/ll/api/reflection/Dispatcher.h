#pragma once

#include <concepts>

namespace ll::reflection {
template <class Storage, std::default_initializable Listener, bool CallInit = false>
class Dispatcher {
public:
    using storage_type  = Storage;
    using listener_type = Listener;

    Storage  storage;
    Listener listener;

    void call() { listener.call(storage); }

    template <class... Args>
    Dispatcher(Args&&... args) // NOLINT(google-explicit-constructor)
    : storage(std::forward<Args>(args)...),
      listener() {
        if constexpr (CallInit) {
            call();
        }
    }
    Dispatcher& operator=(Storage const& other) {
        storage = other;
        call();
        return *this;
    }
    Dispatcher& operator=(Storage&& other) {
        storage = std::move(other);
        call();
        return *this;
    }

    operator Storage const&() const { return storage; } // NOLINT

    operator Storage&() const { return storage; } // NOLINT
};
} // namespace ll::reflection
