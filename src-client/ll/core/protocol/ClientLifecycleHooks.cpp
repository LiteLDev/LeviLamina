#include "ll/core/protocol/ClientEndpoint.h"

#include <memory>
#include <string>
#include <utility>

#include "ll/api/memory/Hook.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSystem.h"

namespace ll::protocol::client::hooks {

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientOutgoingConnectionHook,
    HookPriority::Normal,
    NetworkSystem,
    &NetworkSystem::$onNewOutgoingConnection,
    bool,
    NetworkIdentifier const&       id,
    std::shared_ptr<NetworkPeer>&& peer
) {
    auto accepted = origin(id, std::move(peer));
    if (accepted) {
        if (auto endpoint = detail::getClientEndpoint()) {
            endpoint->observeConnection(id);
        }
    }

    return accepted;
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientNetworkConnectionClosedHook,
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
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeConnection(id);
    }

    origin(id, reason, message, body, skipMessage, summary);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientAllConnectionsClosedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onAllConnectionsClosed,
    void,
    Connection::DisconnectFailReason reason,
    bool                             skipMessage
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin(reason, skipMessage);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientAllRemoteConnectionsClosedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onAllRemoteConnectionsClosed,
    void,
    Connection::DisconnectFailReason reason,
    bool                             skipMessage
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin(reason, skipMessage);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientOutgoingConnectionFailedHook,
    HookPriority::High,
    NetworkSystem,
    &NetworkSystem::$onOutgoingConnectionFailed,
    void,
    Connection::DisconnectFailReason reason
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin(reason);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientHandlerDisconnectHook,
    HookPriority::High,
    ClientNetworkHandler,
    &ClientNetworkHandler::$onDisconnect,
    void,
    NetworkIdentifier const&               id,
    Connection::DisconnectFailReason const reason,
    Connection::DisconnectionStage const   stage,
    std::string const&                     message,
    std::string const&                     body,
    bool                                   skipMessage,
    std::string const&                     telemetry
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeConnection(id);
    }

    origin(id, reason, stage, message, body, skipMessage, telemetry);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientCancelJoinHook,
    HookPriority::High,
    ClientInstance,
    &ClientInstance::$onCancelJoinGame,
    void
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin();
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientLevelExitHook,
    HookPriority::High,
    ClientInstance,
    &ClientInstance::$onLevelExit,
    void
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }

    origin();
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolClientSuspensionDisconnectHook,
    HookPriority::High,
    ClientInstance,
    &ClientInstance::$onAppSuspensionDisconnect,
    void
) {
    if (auto endpoint = detail::getClientEndpoint()) {
        endpoint->closeAll(ProtocolCloseReason::ConnectionClosed);
    }
    
    origin();
}

} // namespace ll::protocol::client::hooks
