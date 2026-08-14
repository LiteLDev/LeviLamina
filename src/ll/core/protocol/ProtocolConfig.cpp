#include "ll/core/protocol/ProtocolConfig.h"

#include <string>
#include <string_view>
#include <unordered_set>

#include "ll/api/protocol/Id.h"

namespace ll::protocol::detail {

namespace protocol_config_detail {

Expected<> invalidLimit(std::string_view name) noexcept {
    return makeStringError("invalid protocol configuration limit: " + std::string{name});
}

Expected<> validateLimits(ProtocolLimitsConfig const& limits) noexcept {
    if (limits.maxPayloadBody == 0 || limits.maxPayloadBody > Limits::MaxPayloadBody) {
        return invalidLimit("maxPayloadBody");
    }
    if (limits.maxPacketsPerSecond == 0 || limits.maxPacketsPerSecond > Limits::MaxPacketsPerSecond) {
        return invalidLimit("maxPacketsPerSecond");
    }
    if (limits.maxBytesPerSecond == 0 || limits.maxBytesPerSecond > Limits::MaxBytesPerSecond) {
        return invalidLimit("maxBytesPerSecond");
    }
    if (limits.burstPackets == 0 || limits.burstPackets > Limits::MaxBurstPackets) {
        return invalidLimit("burstPackets");
    }
    if (limits.burstBytes == 0 || limits.burstBytes > Limits::MaxBurstBytes) {
        return invalidLimit("burstBytes");
    }
    if (limits.handshakeTimeoutSeconds == 0 || limits.handshakeTimeoutSeconds > Limits::MaxHandshakeTimeoutSeconds) {
        return invalidLimit("handshakeTimeoutSeconds");
    }
    return {};
}

} // namespace protocol_config_detail

Expected<> validateProtocolConfig(ProtocolConfig const& config) noexcept {
    return protocol_config_detail::validateLimits(config.limits);
}

Expected<> validateProtocolConfig(ServerProtocolConfig const& config) noexcept {
    auto limits = protocol_config_detail::validateLimits(config.limits);
    if (!limits) {
        return forwardError(limits.error());
    }

    std::unordered_set<std::string_view> uniqueModules;
    uniqueModules.reserve(config.requiredModules.size());
    for (auto const& module : config.requiredModules) {
        auto parsed = ModuleId::parse(module);
        if (!parsed) {
            return makeStringError("invalid required protocol module ID: " + module);
        }
        if (!uniqueModules.emplace(module).second) {
            return makeStringError("duplicate required protocol module ID: " + module);
        }
    }

    return {};
}

} // namespace ll::protocol::detail
