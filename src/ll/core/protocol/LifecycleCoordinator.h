#pragma once

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/ProtocolEvents.h"
#include "ll/core/protocol/SessionManager.h"

namespace ll::protocol::detail {

class LifecycleCoordinator {
    std::uint64_t                                     mEndpointInstanceId;
    EndpointRole                                      mRole;
    mutable std::mutex                                mMutex;
    bool                                              mStopping{};
    std::uint64_t                                     mNextGeneration{1};
    std::map<std::string, std::uint64_t, std::less<>> mConnections;
    SessionManager                                    mSessions;

    static void finalize(std::shared_ptr<ProtocolSession> const& session, ProtocolCloseReason reason) noexcept;

    static void finalize(SessionManager::SessionMap sessions, ProtocolCloseReason reason) noexcept;

public:
    LifecycleCoordinator(std::uint64_t endpointInstanceId, EndpointRole role) noexcept;
    ~LifecycleCoordinator();

    LifecycleCoordinator(LifecycleCoordinator const&)            = delete;
    LifecycleCoordinator& operator=(LifecycleCoordinator const&) = delete;

    [[nodiscard]] std::uint64_t endpointInstanceId() const noexcept { return mEndpointInstanceId; }
    [[nodiscard]] EndpointRole  role() const noexcept { return mRole; }

    [[nodiscard]] Expected<std::uint64_t> openConnection(std::string const& connection) noexcept;
    [[nodiscard]] std::uint64_t           currentGeneration(std::string_view connection) const noexcept;

    [[nodiscard]] Expected<std::shared_ptr<ProtocolSession>> openSession(
        std::string_view                        connection,
        std::uint8_t                            subClientId,
        std::uint64_t                           generation,
        std::uint64_t                           handshakeId,
        std::shared_ptr<RegistrySnapshot const> registry,
        std::shared_ptr<SessionTransport>       transport,
        TransportLimits                         limits
    ) noexcept;

    [[nodiscard]] std::shared_ptr<ProtocolSession>
    findSession(std::string_view connection, std::uint8_t subClientId, std::uint64_t generation) const noexcept;

    bool closeSubclient(
        std::string_view    connection,
        std::uint8_t        subClientId,
        std::uint64_t       generation,
        ProtocolCloseReason reason
    ) noexcept;

    bool closeConnection(std::string_view connection, std::uint64_t generation, ProtocolCloseReason reason) noexcept;

    void closeAll(ProtocolCloseReason reason) noexcept;

    [[nodiscard]] std::vector<std::shared_ptr<ProtocolSession>> activeSessions() const;
};

} // namespace ll::protocol::detail
