#pragma once

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <map>
#include <mutex>
#include <string>
#include <string_view>

#include "ll/core/protocol/SessionState.h"

namespace ll::protocol::detail {

struct ServerInboundGateKey {
    std::string   connection;
    std::uint8_t  subClientId{};
    std::uint64_t generation{};

    auto operator<=>(ServerInboundGateKey const&) const = default;
};

class ServerInboundGate final {
    struct Entry {
        std::uint32_t   maxControlBody{};
        DirectionBudget budget;

        Entry(TransportLimits const& limits, std::chrono::steady_clock::time_point now) noexcept
        : maxControlBody(limits.maxControlBody),
          budget(limits, now) {}
    };

    mutable std::mutex                    mMutex;
    std::map<ServerInboundGateKey, Entry> mEntries;

public:
    [[nodiscard]] bool grant(
        ServerInboundGateKey                  key,
        TransportLimits const&                limits,
        std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now()
    ) noexcept;

    bool revoke(ServerInboundGateKey const& key) noexcept;
    void revokeConnection(std::string_view connection, std::uint64_t generation) noexcept;
    void clear() noexcept;

    [[nodiscard]] bool admit(
        ServerInboundGateKey const&           key,
        std::size_t                           reconstructedPacketBytes,
        std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now()
    ) noexcept;

    [[nodiscard]] bool contains(ServerInboundGateKey const& key) const noexcept;
};

} // namespace ll::protocol::detail
