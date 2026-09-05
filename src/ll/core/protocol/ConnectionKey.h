#pragma once

#include <compare>
#include <cstdint>
#include <string>

#include "ll/api/protocol/Direction.h"

#include "mc/network/NetworkIdentifier.h"

namespace ll::protocol::detail {

struct ConnectionKey {
    std::uint64_t endpointInstanceId{};
    EndpointRole  role{};
    std::string   connection;
    std::uint8_t  subClientId{};
    std::uint64_t generation{};

    auto operator<=>(ConnectionKey const&) const = default;
};

struct SessionIdentity {
    ConnectionKey     key;
    std::uint64_t     handshakeId{};
    NetworkIdentifier networkIdentifier;
};

} // namespace ll::protocol::detail
