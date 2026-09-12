#pragma once

#include <atomic>
#include <cstdint>
#include <functional>

#include "ll/api/Expected.h"
#include "ll/core/protocol/ConnectionKey.h"

namespace ll::protocol::detail {

class DeferredLoginContinuation final {
public:
    enum class State : std::uint8_t {
        Pending,
        Invoking,
        Consumed,
        Cancelled,
    };

private:
    ConnectionKey      mKey;
    std::uint64_t      mHandshakeId{};
    std::atomic<State> mState{State::Pending};

public:
    DeferredLoginContinuation(ConnectionKey key, std::uint64_t handshakeId);
    ~DeferredLoginContinuation() noexcept;

    DeferredLoginContinuation(DeferredLoginContinuation const&)            = delete;
    DeferredLoginContinuation& operator=(DeferredLoginContinuation const&) = delete;
    DeferredLoginContinuation(DeferredLoginContinuation&&)                 = delete;
    DeferredLoginContinuation& operator=(DeferredLoginContinuation&&)      = delete;

    [[nodiscard]] ConnectionKey const& key() const noexcept { return mKey; }
    [[nodiscard]] std::uint64_t        handshakeId() const noexcept { return mHandshakeId; }
    [[nodiscard]] State                state() const noexcept { return mState.load(std::memory_order_acquire); }

    [[nodiscard]] Expected<> consume(std::function<Expected<>()> invoker);
    bool                     cancel() noexcept;
};

} // namespace ll::protocol::detail
