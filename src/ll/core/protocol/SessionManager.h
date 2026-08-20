#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/core/protocol/ProtocolSession.h"

namespace ll::protocol::detail {

class SessionManager {
    std::uint64_t                                          mEndpointInstanceId;
    EndpointRole                                           mRole;
    mutable std::mutex                                     mMutex;
    std::uint64_t                                          mNextGeneration{1};
    std::map<SessionKey, std::shared_ptr<ProtocolSession>> mSessions;

public:
    SessionManager(std::uint64_t endpointInstanceId, EndpointRole role) noexcept;

    [[nodiscard]] Expected<std::shared_ptr<ProtocolSession>> open(
        std::string                             connection,
        std::uint8_t                            subClientId,
        std::uint64_t                           handshakeId,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits
    ) noexcept;

    [[nodiscard]] std::shared_ptr<ProtocolSession>
    find(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) const noexcept;

    [[nodiscard]] bool close(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) noexcept;

    [[nodiscard]] std::vector<std::shared_ptr<ProtocolSession>> activeSessions() const;
    void                                                        closeAll() noexcept;
};

} // namespace ll::protocol::detail
