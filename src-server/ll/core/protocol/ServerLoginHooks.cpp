#include "ll/core/protocol/ServerLoginIntegration.h"

#include <optional>

#include "ll/api/memory/Hook.h"

#include "mc/network/ConnectionRequest.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ClientToServerHandshakePacket.h"
#include "mc/network/packet/LoginPacket.h"

namespace ll::protocol::detail {

LL_TYPE_INSTANCE_HOOK(
    ProtocolServerDiscoveryHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$_validateLoginPacket,
    std::optional<PlayerAuthenticationInfo>,
    NetworkIdentifier const& id,
    LoginPacket const&       packet
) {
    auto result = origin(id, packet);
    if (result && packet.mConnectionRequest) {
        getServerLoginIntegration()
            .observeConnectionRequest(id, static_cast<std::uint8_t>(packet.mSenderSubId), *packet.mConnectionRequest);
    }

    return result;
}

LL_TYPE_INSTANCE_HOOK(
    ProtocolServerLoginHandshakeHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&             id,
    ClientToServerHandshakePacket const& packet
) {
    NetworkIdentifierWithSubId sender{id, packet.mSenderSubId};

    switch (getServerLoginIntegration().handleHandshake(*this, sender)) {
    case ServerLoginIntegration::HandshakeDisposition::ContinueVanilla:
        origin(id, packet);
        return;
    case ServerLoginIntegration::HandshakeDisposition::Deferred:
    case ServerLoginIntegration::HandshakeDisposition::Rejected:
        return;
    }
}

LL_TYPE_INSTANCE_HOOK(
    ProtocolServerPreloginRuntimePacketGateHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$allowIncomingPacketId,
    IncomingPacketFilterResult,
    NetworkIdentifierWithSubId const& sender,
    MinecraftPacketIds                packetId,
    uint64                            packetSize
) {
    if (packetId == MinecraftPacketIds::LeviLaminaRuntimePacket) {
        switch (getServerLoginIntegration().filterIncoming(sender, static_cast<std::size_t>(packetSize))) {
        case ServerLoginIntegration::InboundDisposition::Allowed:
            return IncomingPacketFilterResult::Allowed;
        case ServerLoginIntegration::InboundDisposition::Rejected:
            return IncomingPacketFilterResult::RejectedWithDisconnect;
        case ServerLoginIntegration::InboundDisposition::UseNativePolicy:
            break;
        }
    }

    return origin(sender, packetId, packetSize);
}

Expected<>
invokeOriginalClientHandshake(NetEventCallback& callback, NetworkIdentifierWithSubId const& sender) noexcept {
    try {
        ClientToServerHandshakePacket packet;
        packet.mSenderSubId = sender.subClientId;

        auto* hook = static_cast<ProtocolServerLoginHandshakeHook*>(static_cast<void*>(&callback));
        hook->origin(sender.id, packet);
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

void registerServerLoginHooks() {
    static memory::HookRegistrar<
        ProtocolServerDiscoveryHook,
        ProtocolServerLoginHandshakeHook,
        ProtocolServerPreloginRuntimePacketGateHook>
        hooks;
}

} // namespace ll::protocol::detail
