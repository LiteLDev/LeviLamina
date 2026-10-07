#pragma once

#include <concepts>
#include <utility>

namespace ll::reflection {
template <class Storage, class Listener, bool CallInit = false>
    requires(std::default_initializable<Listener> && std::movable<Listener>)
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
        if constexpr (CallInit) {
            call();
        }
    }

    // A listener owns state - background tasks, hooks, event listeners - so handing a Dispatcher
    // over has to carry that state along with the storage. Declaring these keeps a transfer a real
    // move: without them it silently falls back to the variadic constructor above, which
    // default-constructs a fresh listener and drops the old one, along with everything the old one
    // owned. The Listener constraint is what makes the defaulted definitions well-formed, and it
    // rejects at compile time the listeners that would otherwise lose their state this way.
    Dispatcher(Dispatcher&&)            = default;
    Dispatcher& operator=(Dispatcher&&) = default;

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

    operator Storage const&() const { return storage; }

    operator Storage&() { return storage; }
};
} // namespace ll::reflection
