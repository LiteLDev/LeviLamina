#pragma once

#include <cstdint>

namespace ll::protocol {

enum class PayloadDirection : std::uint8_t {
    ClientToServer,
    ServerToClient,
};

enum class EndpointRole : std::uint8_t {
    Client,
    Server,
};

enum class PayloadRequirement : std::uint8_t {
    Optional,
    Required,
};

enum class ModuleRequirement : std::uint8_t {
    Optional,
    RequiredOnClient,
    RequiredOnServer,
    RequiredOnBoth,
};

[[nodiscard]] constexpr bool canSend(EndpointRole role, PayloadDirection direction) noexcept {
    return (role == EndpointRole::Client && direction == PayloadDirection::ClientToServer)
        || (role == EndpointRole::Server && direction == PayloadDirection::ServerToClient);
}

[[nodiscard]] constexpr bool canReceive(EndpointRole role, PayloadDirection direction) noexcept {
    return !canSend(role, direction);
}

} // namespace ll::protocol
