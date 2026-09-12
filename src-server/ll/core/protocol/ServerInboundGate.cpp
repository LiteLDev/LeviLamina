#include "ll/core/protocol/ServerInboundGate.h"

#include <algorithm>
#include <limits>

#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/HandshakeCoordinator.h"

namespace ll::protocol::detail {

bool ServerInboundGate::grant(
    ServerInboundGateKey                  key,
    TransportLimits const&                limits,
    std::chrono::steady_clock::time_point now
) noexcept {
    try {
        if (key.connection.empty() || key.generation == 0 || !validTransportLimits(limits)) return false;

        std::scoped_lock lock{mMutex};
        return mEntries.try_emplace(std::move(key), limits, now).second;
    } catch (...) {
        return false;
    }
}

bool ServerInboundGate::revoke(ServerInboundGateKey const& key) noexcept {
    try {
        std::scoped_lock lock{mMutex};
        return mEntries.erase(key) != 0;
    } catch (...) {
        return false;
    }
}

void ServerInboundGate::revokeConnection(std::string_view connection, std::uint64_t generation) noexcept {
    try {
        std::scoped_lock lock{mMutex};

        std::erase_if(mEntries, [&](auto const& entry) {
            return entry.first.connection == connection && entry.first.generation == generation;
        });
    } catch (...) {}
}

void ServerInboundGate::clear() noexcept {
    try {
        std::scoped_lock lock{mMutex};
        mEntries.clear();
    } catch (...) {}
}

bool ServerInboundGate::admit(
    ServerInboundGateKey const&           key,
    std::size_t                           reconstructedPacketBytes,
    std::chrono::steady_clock::time_point now
) noexcept {
    try {
        std::scoped_lock lock{mMutex};

        auto found = mEntries.find(key);
        if (found == mEntries.end()) return false;

        constexpr std::size_t RuntimeIdBytes       = sizeof(std::uint64_t);
        constexpr std::size_t MaximumHeaderSlack   = 16;
        constexpr std::size_t MinimumControlPacket = RuntimeIdBytes + 1;

        auto const maximum =
            static_cast<std::size_t>(found->second.maxControlBody) + RuntimeIdBytes + MaximumHeaderSlack;

        if (reconstructedPacketBytes < MinimumControlPacket || reconstructedPacketBytes > maximum
            || reconstructedPacketBytes > Limits::MinecraftServerboundPacketBytes
            || !found->second.budget.consume(reconstructedPacketBytes, now)) {
            mEntries.erase(found);
            return false;
        }

        return true;
    } catch (...) {
        return false;
    }
}

bool ServerInboundGate::contains(ServerInboundGateKey const& key) const noexcept {
    try {
        std::scoped_lock lock{mMutex};
        return mEntries.contains(key);
    } catch (...) {
        return false;
    }
}

} // namespace ll::protocol::detail
