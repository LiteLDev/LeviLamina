#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/core/protocol/ProtocolSession.h"

namespace ll::protocol::detail {

class SessionManager {
public:
    using SessionMap = std::map<ConnectionKey, std::shared_ptr<ProtocolSession>>;

private:
    std::uint64_t      mEndpointInstanceId;
    EndpointRole       mRole;
    mutable std::mutex mMutex;
    SessionMap         mSessions;

public:
    SessionManager(std::uint64_t endpointInstanceId, EndpointRole role) noexcept;

    [[nodiscard]] Expected<std::shared_ptr<ProtocolSession>> open(
        std::string                             connection,
        std::uint8_t                            subClientId,
        std::uint64_t                           generation,
        std::uint64_t                           handshakeId,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits,
        NetworkIdentifier const&                networkIdentifier = {}
    ) noexcept;

    [[nodiscard]] std::shared_ptr<ProtocolSession>
    find(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) const noexcept;

    [[nodiscard]] std::shared_ptr<ProtocolSession>
    extract(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) noexcept;

    [[nodiscard]] SessionMap extractConnection(std::string_view connection, std::uint64_t generation);

    [[nodiscard]] SessionMap extractAll();

    [[nodiscard]] std::vector<std::shared_ptr<ProtocolSession>> activeSessions() const;
};

} // namespace ll::protocol::detail
