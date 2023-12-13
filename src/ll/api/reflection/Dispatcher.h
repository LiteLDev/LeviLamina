#pragma once

#include <concepts>
#include <type_traits>

namespace ll::reflection {
template <class Storage, std::default_initializable Listener>
class Dispatcher {
public:
    using storage_type  = Storage;
    using listener_type = Listener;

    Storage  storage;
    Listener listener;

    void call() { listener.call(storage); }

    template <class... Args>
    Dispatcher(Args&&... args) : storage(std::forward<Args>(args)...),
                                 listener() {
        call();
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
