#include <atomic>
#include <optional>
#include <string>

#include "ll/api/memory/Hook.h"
#include "ll/core/network/PacketPeers.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/client/network/LegacyClientNetworkHandler.h"
#include "mc/network/DisconnectionScreenParams.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/DisconnectPacket.h"
#include "mc/network/packet/StartGamePacket.h"

namespace ll::network {

static std::atomic_bool suppressGenericDisconnectScreen{false};

LL_TYPE_INSTANCE_HOOK(
    ClientStartGameHook,
    HookPriority::Normal,
    LegacyClientNetworkHandler,
    &LegacyClientNetworkHandler::$handle,
    void,
    NetworkIdentifier const& source,
    StartGamePacket const&   packet
) {
    auto& peers = PacketPeers::getInstance();
    if (auto reason = peers.checkServer()) {
        peers.removeServer();
        suppressGenericDisconnectScreen = true;
        handle(source, DisconnectPacket{Connection::DisconnectFailReason::Kicked, std::move(reason), std::nullopt});
        return;
    }
    suppressGenericDisconnectScreen = false;
    origin(source, packet);
}

LL_TYPE_INSTANCE_HOOK(
    ClientDisconnectionScreenHook,
    HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$flagDisconnectionAndNotifyWithParams,
    void,
    DisconnectionScreenParams const& params
) {
    if (suppressGenericDisconnectScreen) {
        auto reason = params.mUnk9b233b.as<Connection::DisconnectFailReason>();
        if (reason == Connection::DisconnectFailReason::Disconnected) {
            return;
        }
        if (reason == Connection::DisconnectFailReason::Kicked) {
            suppressGenericDisconnectScreen = false;
        }
    }
    origin(params);
}

LL_TYPE_INSTANCE_HOOK(
    ClientDisconnectHook,
    HookPriority::Normal,
    ClientNetworkHandler,
    &ClientNetworkHandler::$onDisconnect,
    void,
    NetworkIdentifier const&               source,
    Connection::DisconnectFailReason const discoReason,
    Connection::DisconnectionStage const   disconnectStage,
    std::string const&                     messageFromServer,
    std::string const&                     messageBodyOverride,
    bool                                   skipMessage,
    std::string const&                     telemetryOverride
) {
    PacketPeers::getInstance().removeServer();
    origin(
        source,
        discoReason,
        disconnectStage,
        messageFromServer,
        messageBodyOverride,
        skipMessage,
        telemetryOverride
    );
}

static memory::HookRegistrar<ClientStartGameHook, ClientDisconnectionScreenHook, ClientDisconnectHook> hooks;

} // namespace ll::network
