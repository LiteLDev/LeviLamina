#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Limits.h"

namespace ll::protocol {

struct ProtocolLimitsConfig {
    std::uint32_t maxPayloadBody{Limits::MaxPayloadBody};
    std::uint32_t maxPacketsPerSecond{Limits::DefaultPacketsPerSecond};
    std::uint32_t maxBytesPerSecond{Limits::DefaultBytesPerSecond};
    std::uint32_t burstPackets{Limits::DefaultBurstPackets};
    std::uint32_t burstBytes{Limits::DefaultBurstBytes};
    std::uint32_t handshakeTimeoutSeconds{Limits::MaxHandshakeTimeoutSeconds};
};

struct ClientProtocolConfig {
    bool                 enabled{true};
    ProtocolLimitsConfig limits{};
};

struct ServerProtocolConfig {
    bool                     enabled{true};
    bool                     requireLoader{false};
    std::vector<std::string> requiredModules{};
    ProtocolLimitsConfig     limits{};
};

namespace detail {

Expected<> validateProtocolConfig(ClientProtocolConfig const& config) noexcept;

Expected<> validateProtocolConfig(ServerProtocolConfig const& config);

} // namespace detail

} // namespace ll::protocol
