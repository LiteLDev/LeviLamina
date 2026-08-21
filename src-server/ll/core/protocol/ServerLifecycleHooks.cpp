#include "ll/core/protocol/ServerEndpoint.h"

#include <optional>
#include <string>
#include <utility>

#include "ll/api/memory/Hook.h"

#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerInstance.h"

namespace ll::protocol::server::hooks {

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerConnectHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$onConnect,
    void,
    NetworkIdentifier const& id
) {
    origin(id);
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->observeConnection(id);
    }
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerDisconnectClientHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::disconnectClient,
    void,
    NetworkIdentifier const&         id,
    SubClientId                      subClientId,
    Connection::DisconnectFailReason reason
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeSubclient(id, static_cast<std::uint8_t>(subClientId));
    }

    origin(id, subClientId, reason);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerDisconnectClientWithMessageHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::disconnectClientWithMessage,
    void,
    NetworkIdentifier const&         id,
    SubClientId                      subClientId,
    Connection::DisconnectFailReason reason,
    std::string const&               message,
    std::optional<std::string>       filteredMessage
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeSubclient(id, static_cast<std::uint8_t>(subClientId));
    }

    origin(id, subClientId, reason, message, std::move(filteredMessage));
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerDisconnectPrimaryClientHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::disconnectPrimaryClient,
    void,
    NetworkIdentifier const&         id,
    Connection::DisconnectFailReason reason
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeSubclient(id, static_cast<std::uint8_t>(SubClientId::PrimaryClient));
    }

    origin(id, reason);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerHandlerDisconnectHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::$onDisconnect,
    void,
    NetworkIdentifier const&               id,
    Connection::DisconnectFailReason const reason,
    Connection::DisconnectionStage const   stage,
    std::string const&                     message,
    std::string const&                     body,
    bool                                   skipMessage,
    std::string const&                     telemetry
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeConnection(id);
    }

    origin(id, reason, stage, message, body, skipMessage, telemetry);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerNetworkConnectionClosedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onConnectionClosed,
    void,
    NetworkIdentifier const&               id,
    Connection::DisconnectFailReason const reason,
    std::string const&                     message,
    std::string const&                     body,
    bool                                   skipMessage,
    Json::Value const&                     summary
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeConnection(id);
    }

    origin(id, reason, message, body, skipMessage, summary);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerAllConnectionsClosedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onAllConnectionsClosed,
    void,
    Connection::DisconnectFailReason reason,
    bool                             skipMessage
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin(reason, skipMessage);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerAllRemoteConnectionsClosedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onAllRemoteConnectionsClosed,
    void,
    Connection::DisconnectFailReason reason,
    bool                             skipMessage
) {
    if (auto endpoint = detail::getServerEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin(reason, skipMessage);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerStoppingHook,
    HookPriority::High,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    shutdownServerEndpoint();
    origin();
}

} // namespace ll::protocol::server::hooks
