#pragma once

#include <memory>

namespace ll {

struct Statistics {
    struct Impl;

    // shared_ptr, because Impl::start() gives the background task a weak_ptr to its own Impl: the
    // task borrows a strong reference while it is running, and stops by itself once nothing owns
    // the Impl any more. That covers the Impl being dropped by config loading, by call(false) and
    // by a process shutdown alike.
    std::shared_ptr<Impl> impl;

    void call(bool);
    Statistics();

    // Statistics is held by value inside a reflection::Dispatcher, which relies on its listener
    // being movable: config deserialization builds a temporary dispatcher, fires the listener on
    // it, and then transfers the listener into the object that actually owns the storage. Without
    // these, every transfer would silently drop the listener - and destroy the Impl - while the
    // background task still holds a pointer to it.
    Statistics(Statistics&&) noexcept;
    Statistics& operator=(Statistics&&) noexcept;

    ~Statistics();
};
} // namespace ll
